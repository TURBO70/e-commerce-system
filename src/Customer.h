#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {
public:
    string name;
    double balance;

    Customer(string name, double balance);
};

#endif 


