

#ifndef INC_2_CUSTOMER_H
#define INC_2_CUSTOMER_H


// PUBLIC



/* Internal representation of an order. */
typedef struct {
    int idOrder;
    float price;
} Order;


// create an order
Order createOrder(int id, float price);



/* A pointer to an incomplete type
 * (hides the implementation details). */
typedef struct Customer* CustomerPtr;


/* Create a Customer and return a handle to it. */
CustomerPtr createCustomer(const char* name);


/* Destroy the given Customer.
 * All handles to it will be invalidated. */
void destroyCustomer(CustomerPtr p_customer);


// add an order
void placeOrder(CustomerPtr p_customer, Order anOrder);

// show orders

void showOrders(CustomerPtr p_customer);



#endif //INC_2_CUSTOMER_H

