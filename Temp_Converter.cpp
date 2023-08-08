#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    double c;
    double f;
    int option;

    cout << "What conversion do you want?\n";
    cout << "1. C to F\n";
    cout << "2. F to C\n";
    cout << "Enter your choice: ";
    cin >> option;
    if(option == 1)
    {
        cout << "Enter the temperature in celsius: ";
        cin >> c;
        f = (c*9/5) + 32;
        cout << "The temperature in fahreinheit is: " << f;
    }
    else if(option == 2)
    {
        cout << "Enter the temperature in fahreinheit: ";
        cin >> f;
        c = (f-32)*5/9;
        cout << "The temperature in celsius is: " << c;
    }

    return 0;
}
