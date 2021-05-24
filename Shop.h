// ---------------------------------- Shop.h -----------------------------------
// By: Dr. Erika Parsons
// Modified by: Kevin Thomas Kehoe
// Course: CSS 503
// Assignment: Program 2
// Date of Last Modification: 05/06/2018
// -----------------------------------------------------------------------------
// Purpose: Declaration of the barber shop and related methods
// -----------------------------------------------------------------------------

#ifndef _SHOP_H_
#define _SHOP_H_
#include <pthread.h>
#include <queue>
#include <map>
#include <iostream>

using namespace std;

#define DEFAULT_CHAIRS 3 // the default number of chairs for waiting = 3
#define DEFAULT_BARBERS 1 // the default number of barbers = 1

class Shop {
public:
	// Initializes a Shop object with nBarbers and nChairs. 
    Shop(int nb, int nc);
	// Initializes a Shop object with 1 barber and 3 chairs. 
    Shop(); 
	// Is called by a customer thread. 
    int visitShop(int customerId);				// return a non-negative number only when a customer got a service
    // Is called by a customer thread. 
    void leaveShop( int customerId, int barberId );
	//Is called by a barber thread. 
    void helloCustomer(int barberId);
    //Is called by a barber thread. 
    void byeCustomer(int barberId);
    int nDropsOff = 0; // the number of customers dropped off

private:
    int nBarbers; // number of barbers
    int nChairs; // number of waiting chairs

    enum customerState {WAIT, CHAIR, LEAVING};

    struct Barber {
        int id;
        pthread_cond_t barberCond;
        int myCustomer = -1; // no customer
    };

    struct Customer {
        int id;
        pthread_cond_t customerCond;
        customerState state = WAIT; // initialized as waiting
        int myBarber = -1; // no barber
    };


    Barber *barbers; // array of barber objects
    map<int, Customer> customers; // container for customer objects

    queue<int> waitingCustomers; // queue of waiting customers
    queue<int> sleepingBarbers; // queue of idle barbers

    pthread_mutex_t mutex;

    Barber* getBarber(int barberId);
};

#endif