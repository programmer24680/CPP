#include <bits/stdc++.h>
#include <D:\c++\vector_functions.hpp>
using std::vector;
using std::cout;
using std::cin;


int main()
{

    vector <int> vec {2, 1, 5, 6, 4, 8, 3, 9};
    char choice;
    int program_running = 1;

    while(program_running)
    {
        cout << "P - Print Numbers.\n";
        cout << "A - Add A Number.\n";
        cout << "M - Display Mean Of Numbers.\n";
        cout << "S - Display The Smallest Number.\n";
        cout << "L - Display The Largest Number.\n";
        cout << "Q - Quit.\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice == 'p' || choice == 'P')
        {
            p(&vec);
        }
        else if(choice == 'A' || choice == 'a')
        {
            a(&vec);
        }
        else if(choice == 'M' || choice == 'm')
        {
            cout << m(&vec) << std::endl;
        }
        else if(choice == 'S' || choice == 's')
        {
            cout << s(&vec) << std::endl;
        }
        else if(choice == 'L' || choice == 'l')
        {
            cout << l(&vec) << std::endl;
        }
        else if(choice == 'Q' || choice == 'q')
        {
            program_running = 0;
        }
        else
        {
            cout << "Unknown selection, please try again.\n";
        }
    }

    return 0;
}



