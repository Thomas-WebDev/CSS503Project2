// -------------------------------- shop.cpp -----------------------------------
// By: Dr. Erika Parsons
// Modified by: Kevin Thomas Kehoe
// Course: CSS 503
// Assignment: Program 2
// Date of Last Modification: 05/06/2018
// -----------------------------------------------------------------------------
// Purpose: Initialize the barber shop and related methods
// -----------------------------------------------------------------------------

#include "Shop.h"

Shop::Shop(int nb, int nc) { // initialize a Shop object with nBarbers and nChairs
    nBarbers = nb;
    nChairs = nc;
    pthread_mutex_init(&mutex, NULL); // initialize mutex
    barbers = new Barber[nBarbers];
    for (int i = 0; i < nBarbers; i++) { // initialize for all barbers
        barbers[i].id = i;
        pthread_cond_init(&barbers[i].barberCond, NULL);
    }
}

Shop::Shop() { // initialize a Shop object with 1 barber and 3 chairs
    nBarbers = DEFAULT_BARBERS;
    nChairs = DEFAULT_CHAIRS;
	pthread_mutex_init(&mutex, NULL); // initialize mutex
    barbers = new Barber[nBarbers];
    for (int i = 0; i < nBarbers; i++) { // initialize for all barbers (1)
        barbers[i].id = i;
        pthread_cond_init(&barbers[i].barberCond, NULL);
    }
}

int Shop::visitShop(int customerId) { // return a non-negative number only when a customer got a service
    pthread_mutex_lock(&mutex); // lock
    if (((int)waitingCustomers.size() == nChairs)&&(sleepingBarbers.empty())) { // If all chairs are full and all barbers are busy
        printf("customer[%i]: leaves the shop because of no available waiting chairs. \n", customerId);
        nDropsOff++;
        pthread_mutex_unlock(&mutex); // unlock
        return -1;
    }
    customers[customerId] = Customer();
    customers[customerId].id = customerId;
    pthread_cond_init(&customers[customerId].customerCond, NULL);
    int barberId;
    if (sleepingBarbers.empty()) { // if all barbers are busy
        waitingCustomers.push(customerId); // Take a waiting chair
        printf("customer[%i]]: takes a waiting chair. # waiting seats available = %i \n", 
                customerId, (int)(nChairs-waitingCustomers.size()));
        while (customers[customerId].myBarber == -1) { // while no assigned barber
            pthread_cond_wait(&customers[customerId].customerCond, &mutex); // Wait for a barber to wake me up
        }
        barberId = customers[customerId].myBarber;
    }
    else { // Get my barber whose id is barberId from queue
        barberId = sleepingBarbers.front();
        sleepingBarbers.pop(); // Remove barber from sleeping queue
        customers[customerId].myBarber = barberId;
        getBarber(barberId) -> myCustomer = customerId;
    }
	// Have barberId start my haircut
    printf("customer[%i]: moves to a service chair[%i], # waiting seats available = %i \n", customerId, barberId, (int)(nChairs-waitingCustomers.size()));
    customers[customerId].state = CHAIR; // change state
    pthread_cond_signal(&(getBarber(barberId) -> barberCond)); // signal barber
    pthread_mutex_unlock(&mutex); // unlock
    return barberId;
}

void Shop::leaveShop(int customerId, int barberId) {
    pthread_mutex_lock(&mutex); // lock
    printf("customer[%i]: wait for barber[%i] to be done with hair-cut.\n", customerId, barberId);
    while (customers[customerId].myBarber != -1) {// while barber is still assigned
        pthread_cond_wait(&customers[customerId].customerCond, &mutex); // While barberId is cutting my hair, Wait
    }
	// Pay barber
    printf("customer[%i]: says good-bye to barber[%i]\n", customerId, barberId);
    customers[customerId].state = LEAVING; // change state
	// Finish transaction
    pthread_cond_signal(&(getBarber(barberId) -> barberCond));
    pthread_mutex_unlock(&mutex); // unlock
}

void Shop::helloCustomer(int barberId) {
    pthread_mutex_lock(&mutex); // lock
    if (getBarber(barberId) -> myCustomer == -1)  { // If I have no customer and all the waiting chairs are empty 
        printf("barber[%i]: sleeps because of no customers.\n", barberId);
        sleepingBarbers.push(barberId);
        while (getBarber(barberId) -> myCustomer == -1) {
            pthread_cond_wait(&(getBarber(barberId) -> barberCond), &mutex);
        }
    }

    while (customers[getBarber(barberId) -> myCustomer].state != CHAIR) { //synchronization
		pthread_cond_wait(&(getBarber(barberId) -> barberCond), &mutex);
    }
	printf("barber[%i]: starts a hair-cut service for customer[%i]\n", barberId, getBarber(barberId) -> myCustomer);
    pthread_mutex_unlock(&mutex); // unlock
}

void Shop::byeCustomer(int barberId) {
    pthread_mutex_lock(&mutex); // lock
    printf("barber[%i]: says he's done with a hair-cut service for customer[%i]\n", barberId, getBarber(barberId) -> myCustomer);
    customers[getBarber(barberId) -> myCustomer].myBarber = -1;
    pthread_cond_signal(&customers[getBarber(barberId) -> myCustomer].customerCond); // Wakes up my customer.
    while (customers[getBarber(barberId) -> myCustomer].state != LEAVING) { //synchronization
        pthread_cond_wait(&(getBarber(barberId) -> barberCond), &mutex); // Wait for my customer to pay before I take a new one
    }
    getBarber(barberId) -> myCustomer = -1; // Remove customer from barber

    printf("barber[%i]: calls in another customer.\n", barberId);
    if (!waitingCustomers.empty()) {
        int customerId = waitingCustomers.front();
        waitingCustomers.pop();
        getBarber(barberId) -> myCustomer = customerId;
        customers[customerId].myBarber = barberId;
        pthread_cond_signal(&customers[customerId].customerCond); // Wakes up another customer who is waiting on a waiting chair.  
    }

    pthread_mutex_unlock(&mutex);// unlcok
}

// Returns barber structure of ID barberId as passed
Shop::Barber* Shop::getBarber(int barberId) {
    for (int i = 0; i< nBarbers; i++) {
        if (barbers[i].id == barberId) {
            return &barbers[i];
        }
    }
    return NULL;
}