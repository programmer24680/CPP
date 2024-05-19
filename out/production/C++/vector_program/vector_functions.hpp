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
