#include <iostream>
int balance = 60000;

std::string withdrawMoney(int, int*);
std::string depositMoney(int, int*);
std::string showBalance(int);

std::string withdrawMoney(int amount, int* bal_address)
{
    if(amount<=*bal_address && amount>0)
    {
        *bal_address -= amount;
        std::string string = std::to_string(amount);
        return string.append(" rupees withdrawn successfully\n");
    }
    else if(amount<=0)
    {
        return "Please enter an amount greater than zero.\n";
    }
    else
    {
        return "You don't have enogh balance in your account.\n";
    }
}


std::string depositMoney(int amount, int* bal_address)
{

    std::string string = std::to_string(amount);
    *bal_address += amount;
    return string.append(" rupees deposited successfully\n");
}


std::string showBalance(int balance)
{
    return "Your account balance is " + std::to_string(balance) + " rupees.\n";
}
