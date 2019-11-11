
#include "customer.h"
#include <stdlib.h>
#include <stdio.h>

#define MAX_NO_OF_ORDERS 10


/* Internal representation of a customer. */

struct Customer {
    const char* name;
    int nOfOrders;
    Order orders[MAX_NO_OF_ORDERS];
};

CustomerPtr createCustomer(const char* name){
    CustomerPtr p_customer = malloc(sizeof * p_customer);


    if(p_customer) {
        /* Initialize each field in the customer... */
        p_customer->nOfOrders=0;
        p_customer->name=name;
    }
    return p_customer;
}

void destroyCustomer(CustomerPtr p_customer) {
    /* Perform clean-up of the customer internals, if necessary. */
    free(p_customer);
}


// create an order
Order createOrder(int id, float price){
    Order newOrder;
    newOrder.idOrder=id;
    newOrder.price=price;
    return newOrder;
}

// add an order
void placeOrder(CustomerPtr p_customer, Order anOrder){
    int idx_actualOrder=p_customer->nOfOrders;
    p_customer->orders[idx_actualOrder]=anOrder;
    (p_customer->nOfOrders)++;

};


// show orders

void showOrders(CustomerPtr p_customer){
    int nOfOrders=p_customer->nOfOrders;
    char *name=p_customer->name;
    int idOrder;
    float price;

    printf("Customer %s - number of orders %d \n",name, nOfOrders );
    for (int i=0; i<nOfOrders; i++){
        idOrder=p_customer->orders[i].idOrder;
        price= p_customer->orders[i].price;
        printf("Order n. %d:  ID %d, PRICE %.2f\n",i,idOrder, price );

    }

};
