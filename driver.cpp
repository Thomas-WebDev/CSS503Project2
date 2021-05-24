// -------------------------------- driver.cpp ---------------------------------
// By: Dr. Erika Parsons
// Modified by: Kevin Thomas Kehoe
// Course: CSS 503
// Assignment: Program 2
// Date of Last Modification: 05/06/2018
// -----------------------------------------------------------------------------
// Purpose: A barbershop consists of a waiting room with n chairs and a barber 
// room with m barber chairs. If there are no customers to be served, all the 
// barbers go to sleep. If a customer enters the barbershop and all chairs 
// (including both, waiting and barber chairs) are occupied, then the customer 
// leaves the shop.   
// -----------------------------------------------------------------------------

#include <iostream>		// cout
#include <sys/time.h>	// gettimeofday
#include <unistd.h>		//usleep
#include "Shop.h"

using namespace std;

void *barber( void * );
void *customer( void * ); 

// a set of parameters to be passed to each thread
class ThreadParam {
public:
  ThreadParam( Shop *shop, int id, int serviceTime ) :
    shop( shop ), id( id ), serviceTime( serviceTime ) { };
  Shop *shop;               // a pointer to the Shop object
  int id;                   // a thread identifier
  int serviceTime;          // service time (in usec) to a barber, whereas 0 to a customer
};

int main( int argc, char *argv[] ) {

  if (argc != 5) { // validate the arguments
	cout << "Error: Please enter 4 integers" << endl << "These integers should represent" << endl;
    cout << "Number of Barbers" << endl << "Number of Chairs" << endl << "Number of  customers" << endl << "Service time" << endl;
    return -1;
  }
  int nBarbers = atoi(argv[1]);      // # barbers working in the barbershop
  int nChairs = atoi(argv[2]);       // # chairs available for customers to wait on
  int nCustomers = atoi(argv[3]);    // # customers who need a haircut service
  int serviceTime = atoi(argv[4]);   // each barber's service time ( in u seconds)

  pthread_t barber_thread[nBarbers];
  pthread_t customer_threads[nCustomers];
  Shop shop(nBarbers, nChairs);      // instantiate a barbershop
  
  for ( int i = 0; i < nBarbers; i++ ) {   // instantiate barbers
    ThreadParam *param = new ThreadParam( &shop, i, serviceTime );
    pthread_create(&barber_thread[i], NULL, barber, (void *)param);
  }
  for (int i = 0; i < nCustomers; i++) { // instantiate customers
    usleep(rand() % 1000);              // with random interval
    ThreadParam *param = new ThreadParam(&shop, i + 1, 0);
    pthread_create(&customer_threads[i], NULL, customer, (void *)param);
  }

  for ( int i = 0; i < nCustomers; i++ )   // wait until all the customers are served
    pthread_join(customer_threads[i], NULL);

  for ( int i = 0; i < nBarbers; i++ )     // terminate all the barbers
    pthread_cancel( barber_thread[i] );
  cout << "# customers who didn't receive a service = " << shop.nDropsOff
       << endl;

  return 0;
}

// the barber thread function
void *barber( void *arg ) {
  ThreadParam &param = *(ThreadParam *)arg; // extract parameters
  Shop &shop = *(param.shop);
  int id = param.id;
  int serviceTime = param.serviceTime;
  delete &param;

  while(true) {				 // continue until terminated by the main
    shop.helloCustomer(id);  // pick up a new customer
    usleep(serviceTime);     // spend a service time
    shop.byeCustomer(id);    // release the customer
  }
  return NULL;
}

// the customer thread function
void *customer(void *arg) {
  ThreadParam &param = *(ThreadParam *) arg; // extract parameters
  Shop &shop = *(param.shop);
  int id = param.id;
  delete &param;

  int barber = -1;
  if ((barber = shop.visitShop( id ) ) != -1) // assigned to barber i or no barber (-1)?
    shop.leaveShop( id, barber );             // wait until service is finished

  return NULL;
}