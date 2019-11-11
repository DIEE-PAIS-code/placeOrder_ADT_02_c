#include <stdio.h>
#include "customer.h"

int main() {
    CustomerPtr p_customer_1,p_customer_2;
    Order anOrder_1, anOrder_2, anOrder_3, anOrder_4;

    anOrder_1=createOrder(1,100);
    anOrder_2=createOrder(2,200);
    anOrder_3=createOrder(3,300);
    anOrder_4=createOrder(4,350);

    p_customer_1=createCustomer("Luca");
    p_customer_2=createCustomer("Franco");

    showOrders(p_customer_1);
    showOrders(p_customer_2);
    printf("\n");

    placeOrder(p_customer_1, anOrder_1);
    placeOrder(p_customer_1, anOrder_2);
    placeOrder(p_customer_2, anOrder_3);
    placeOrder(p_customer_2, anOrder_4);

    showOrders(p_customer_1);
    printf("\n");
    showOrders(p_customer_2);

    destroyCustomer(p_customer_1);
    destroyCustomer(p_customer_2);

    getchar();
    return 0;
}