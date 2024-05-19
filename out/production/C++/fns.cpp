#include <iostream>

void print_arr(const int*, int);

int main()
{
    int numbers [5] {1, 2, 3, 4, 5};
    print_arr(numbers, 5);
    return 0;
}


void print_arr(const int* numbers, int size)
{
    for(int i = 0; i<size; i++)
    {
        std::cout << (*numbers) << std::endl;
        numbers++;
    }
}