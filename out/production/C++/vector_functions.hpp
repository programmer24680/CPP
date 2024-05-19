#include <bits/stdc++.h>
using std::vector;
using std::cout;
using std::cin;

namespace vars
{
    int number;
    int element;
    static int mean = 0;
    static int smallest = 0;
    static int largest = 0;
    vector <int> vec1;
}


void p(vector <int>*);
void a(vector <int>*);
int m(vector <int>*);
int s(vector <int>*);
int l(vector <int>*);
void q(vector <int>*);
char display_menu();
void r(char, vector <int>*, int*);


char display_menu()
{
        char choice;
        cout << "P - Print Numbers.\n";
        cout << "A - Add A Number.\n";
        cout << "M - Display Mean Of Numbers.\n";
        cout << "S - Display The Smallest Number.\n";
        cout << "L - Display The Largest Number.\n";
        cout << "Q - Quit.\n";
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
}


void r(char choice, vector <int>* vec, int* program_running)
{
    if(choice == 'p' || choice == 'P')
        {
            p(vec);
        }
        else if(choice == 'A' || choice == 'a')
        {
            a(vec);
        }
        else if(choice == 'M' || choice == 'm')
        {
            cout << m(vec) << std::endl;
        }
        else if(choice == 'S' || choice == 's')
        {
            cout << s(vec) << std::endl;
        }
        else if(choice == 'L' || choice == 'l')
        {
            cout << l(vec) << std::endl;
        }
        else if(choice == 'Q' || choice == 'q')
        {
            (*program_running) = 0;
        }
        else
        {
            cout << "Unknown selection, please try again.\n";
        }
}


void p(vector <int>* vec)
{
    if((*vec).size() != 0)
    {
        cout << "[ ";
        for(int i = 0; i<(*vec).size(); i++)
        {
            cout << (*vec).at(i) << " "; 
        }
        cout << "]\n";
    }
    else
    {
        cout << "[]\n";
    }
    
}


void a(vector <int>* vec)
{
    using namespace vars;
    cout << "How many numbers do you want to add? ";
    cin >> number;
    cout << "Enter the numbers you want to add with single space btw two numbers: ";
    for(int i = 0; i<number; i++)
    {
        cin >> element;
        (*vec).push_back(element);
    }
    mean = 0;
    largest = 0;
    smallest = 0;
}


int m(vector <int>* vec)
{
    using namespace vars;
    if(mean != 0)
    {
        return mean;
    }
    for(int i = 0; i<(*vec).size(); i++)
    {
        mean += (*vec).at(i);
    }
    return mean;
}


int s(vector <int>* vec)
{
    using namespace vars;
    if(smallest != 0)
    {
        return smallest;
    }
    vec1 = (*vec);
    std::sort((*vec).begin(), (*vec).end());
    smallest =  (*vec).at(0);
    (*vec) = vec1;
    return smallest;
}


int l(vector <int>* vec)
{
    using namespace vars;
    if(largest != 0)
    {
        return largest;
    }
    vec1 = (*vec);
    std::sort((*vec).begin(), (*vec).end(), std::greater<int>());
    largest =  (*vec).at(0);
    (*vec) = vec1;
    return largest;
}