#ifndef _SHOP_H_
#define _SHOP_H_
#include <pthread.h>
#include <queue>

using namespace std;

#define DEFAULT_CHAIRS 3
#define DEFAULT_BARBERS 1

class Shop {
 public:
	 /*
	 Note that this is only a "starter" template provided for your convenience:  Among other things, 
	 you will need to add some private variables such as pthread_mutex_t and pthread_cond_t, etc. to 
	 implement this Shop class as a monitor. Also, since there can be multiple barbers working on 
	 multiple customers at the same time, you may consider using arrays or vectors of condition 
	 variables, e.g., to ensure that a barber correctly signals the right customer when the haircut is 
	 finished.
	 */
	Shop(int nBarbers, int nChairs); // initialize a Shop object with nBarbers and nChairs 
	Shop(); // initialize a Shop object with 1 barber and 3 chairs 

	int visitShop(int id); // return non-negative number (barber ID) only when a customer got service 
	void leaveShop(int customerId, int barberId);
	void helloCustomer(int id);
	void byeCustomer(int id);
	int nDropsOff; // the number of customers dropped off 

private:
	const int max;              // the max number of threads that can wait
	int service_chair;          // indicate the current customer thread id
	bool in_service;
	bool money_paid;
	queue<int> waiting_chairs;  // includes the ids of all waiting threads

	pthread_mutex_t mutex;
	pthread_cond_t  cond_customers_waiting;
	pthread_cond_t  cond_customer_served;
	pthread_cond_t  cond_barber_paid;
	pthread_cond_t  cond_barber_sleeping;

	static const int barber = 0; // the id of the barber thread

	void init();
	string int2string(int i);
	void print(int person, string message);
};
#endif 
