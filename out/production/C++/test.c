#include <stdio.h>

int sum_of_even_numbers(int);

int main()
{
    printf("Enter how many even numbers sum you want: ");
    int n;
    int t;
    t = 2*n;
    int result;
    scanf("%d", &n);
    result = sum_of_even_numbers(t);
    printf("%d", result);
    return 0;
}

int sum_of_even_numbers(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + sum_of_even_numbers(n-2);
}
