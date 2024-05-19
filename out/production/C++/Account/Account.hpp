#pragma once
#include <iostream>

class Account
{
protected:
    std::string name;
    int balance {0};
public:
    virtual std::string withdraw() = 0;
    virtual std::string deposit() = 0;
};

class SavingsAccount: public Account
{
    int interest_rate;
public:
    std::string withdraw();
    std::string deposit();
    SavingsAccount();
    ~SavingsAccount();
};

class CheckingAccount: public Account
{
    int min_bal;
    int per_check_fee;
public:
    std::string withdraw();
    std::string deposit();
};

class TrustAccount: public Account
{
    int interest_rate;
public:
    std::string withdraw();
    std::string deposit();
};
