#include <bits/stdc++.h>
#include <D:\c++\vector_functions.hpp>
using std::vector;
using std::cout;
using std::cin;

int main()
{

    vector <int> vec {2, 1, 5, 6, 4, 8, 3, 9};
    int program_running = 1;

    while(program_running)
    {
        r(display_menu(), &vec, &program_running);
    }

    return 0;
}

