#include <iostream> // cout
#include <sstream>  // stringstream
#include <string>   // string
#include "Shop.h"

void Shop::init( ) {
  pthread_mutex_init( &mutex, NULL );
  pthread_cond_init( &cond_customers_waiting, NULL );
  pthread_cond_init( &cond_customer_served, NULL );
  pthread_cond_init( &cond_barber_paid, NULL );
  pthread_cond_init( &cond_barber_sleeping, NULL );
}

string Shop::int2string( int i ) {
  stringstream out;
  out << i;
  return out.str( );
}

void Shop::print(int person, string message) {
	cout << ((person != barber) ? "customer[" : "barber  [")
		<< person << "]: " << message << endl;
}

//Initializes a Shop object with 1 barber and 3 chairs.
Shop::Shop() {
	init();
}

// Initializes a Shop object with nBarbers and nChairs
Shop::Shop(int nBarbers, int nChairs) {
	init();
}

bool Shop::visitShop(int id) {
	/*Is called by a customer thread. 
  
Enter the critical section.  
If all chairs are full { 
Print “id leaves the shop because of no available waiting chairs”.  
Increment nDropsOff. 
Leave the critical section. Return –1. 
} 
if all barbers are busy { 
Take a waiting chair (or Push the customer in a waiting queue).  
Print “id takes a waiting chair. # waiting seats available = …”.  
Wait for a barber to wake me up. 
Pop me out from the queue 
} 
Get my barber whose id is barberId. 
Print “id moves to a service chair[barberId], # waiting seats available = …”.  
Have barberId start my haircut. 
Leave the critical section. Return barberId. */
  pthread_mutex_lock( &mutex );   // lock

  if ( waiting_chairs.size( ) == max ) {  // waiting chairs are all occupied
    print( id,"leaves the shop because of no available waiting chairs.");
    ++nDropsOff;
    pthread_mutex_unlock( &mutex );
    return false;                 // leave the shop
  }
  if ( service_chair != 0 || !waiting_chairs.empty( ) ) {
    // someone is being served or transitting from a waiting to a service chair
    waiting_chairs.push( id );    // have a waiting chair

    print( id, "takes a waiting chair. # waiting seats available = " 
	   + int2string( max - waiting_chairs.size( ) ) );
    pthread_cond_wait( &cond_customers_waiting, &mutex );
    waiting_chairs.pop( );        // stand up
  }

  print( id, "moves to the service chair. # waiting seats available = " 
	 + int2string( max - waiting_chairs.size( ) ) );
  service_chair = id;             // have the service chair
  in_service = true;

  // wake up the barber just in case if he is sleeping
  pthread_cond_signal( &cond_barber_sleeping );

  pthread_mutex_unlock( &mutex ); // unlock
  return true;
}

void Shop::leaveShop( int id ) {
  /*Is called by a customer thread. 
 
Enter the critical section. 
Print “customerId wait for barber[barberId] to be done with hair-cut.”  
While barberId is cutting my hair, 
Wait. 
Pay barber  
Print “customerId says good-by to barber[]” // finish transaction 
Leave the critical section. */
  pthread_mutex_lock( &mutex );   // lock

  print( id, "wait for the hair-cut to be done" );
  while ( in_service == true )                           // while being served
    pthread_cond_wait( &cond_customer_served, &mutex );  // just sit.

  money_paid = true;
  pthread_cond_signal( &cond_barber_paid );
  
  print( id, "says good-bye to the barber." );
  pthread_mutex_unlock( &mutex ); // unlock
}

void Shop::helloCustomer( ) {
	/*Is called by a barber thread. 
  
Enter the critical section. 
If I have no customer and all the waiting chairs are empty {  
Print “ –id sleeps because of no customers.” 
(Note that we display barber’s id from 0 to –(nBarbers – 1) in order to distinguish it from a customer id (from 1 to nCustomers).) 
Wait until a customer wakes me up. 
} 
Print “–id starts a hair-cut service for customer[the customer thread id that woke me up].”  
Leave the critical section. */
  pthread_mutex_lock( &mutex );   // lock

  if ( waiting_chairs.empty( ) && service_chair == 0 ) { // no customers
    print( barber, "sleeps because of no customers." );
    pthread_cond_wait( &cond_barber_sleeping, &mutex ); // then, let's sleep
  }

  if ( service_chair == 0 )               // check if the customer, sit down.
    pthread_cond_wait( &cond_barber_sleeping, &mutex );
  print( barber, 
	 "starts a hair-cut service for " + int2string( service_chair ) );

  pthread_mutex_unlock( &mutex );  // unlock
}

void Shop::byeCustomer( ) {
	/*Is called by a barber thread. 
  
Enter the critical section. 
Print “–id says he's done with a hair-cut service for customer[my customer thread id].” 
Wakes up my customer. 
Wait for my customer to pay before I take a new one  // wait for transaction to be over 
Print ““–id calls in another customer.” 
Wakes up another customer who is waiting on a waiting chair.  
Leave the critical section. */
  pthread_mutex_lock( &mutex );    // lock

  in_service = false;
  print( barber, "says he's done with a hair-cut service for " + 
	 int2string( service_chair ) );

  money_paid = false;
  pthread_cond_signal( &cond_customer_served );   // tell the customer "done"

  while ( money_paid == false )
    pthread_cond_wait( &cond_barber_paid, &mutex );

  service_chair = 0;
  print( barber, "calls in another customer" );
  pthread_cond_signal( &cond_customers_waiting ); // call in another one

  pthread_mutex_unlock( &mutex );  // unlock
}