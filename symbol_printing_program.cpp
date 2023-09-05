#include <bits/stdc++.h>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    int rows;
    int columns;
    char symbol;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    cout << "Enter the symbol you want to print: ";
    cin >> symbol;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout << symbol;
        }
        cout << endl;
    }
}
