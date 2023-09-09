#ifndef _BANKING_H_
#define _BANKING_H_
#include <iostream>

class Account
{
public:
    Account();
    ~Account();
    void deposit(double amounnt);
    void withdraw(double amount);
};
#endif