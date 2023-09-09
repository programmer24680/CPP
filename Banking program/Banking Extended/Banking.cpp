#include "Banking.h"

Account::Account()
{
    std::cout << "Account initialized" << std::endl;
}

Account::~Account()
{
    std::cout << "Account Destroyed" << std::endl;
}

void Account::deposit(double amount)
{
    std::cout << "Your deposit of amount " << amount << " rupees is processes successfully." << std::endl;
}

void Account::withdraw(double amount)
{
    std::cout << "Your withdraw of rupees " << amount << " is successful." << std::endl;
}
