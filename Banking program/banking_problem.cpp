#include <bits/stdc++.h>
#include "bank_functions.h"
extern int balance;


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int* bal_address = &balance;
    int choice;
    register int amount;
    bool use_state = true;

    cout << "Welcome to the bank.\n";
    while(use_state)
    {
        cout << "What do you want to do?: \n";
        cout << "1. withdraw money\n";
        cout << "2. deposit money\n";
        cout << "3. show balance\n";
        cout << "4. quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "How much amount do you want to withdraw? ";
                cin >> amount;
                cout << withdrawMoney(amount, bal_address);
                break;
            case 2:
                cout << "How much money do you want to deposit? ";
                cin >> amount;
                cout << depositMoney(amount, bal_address);
                break;
            case 3:
                cout << showBalance(balance);
                break;
            case 4:
                cout << "Thanks for using the bank. Please visit again! :)";
                use_state = false;
                break;
                


        }
    }

    return 0;
}


