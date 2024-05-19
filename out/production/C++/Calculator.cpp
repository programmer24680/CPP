#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::ws;

    char action;
    double num1;
    double num2;

    cout << "**********Calculator***********\n";
    while(1)
    {
        cout << "Enter the action to perform(A\\S\\M\\D): ";
        cin >> action;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        if(action=='A')
        {
            cout << num1+num2 << endl;
        }
        else if(action=='S')
        {
            cout << num1-num2 << endl;
        }
        else if(action=='M')
        {
            cout << num1*num2 << endl;
        }
        else if(action=='D')
        {
            cout << num1/num2 << endl;
        }
    }
}
