#include <iostream>

int sum_of_even_numbers(int);

int main()
{
	int n = 0;
	int t {0};
	std::cin >> n;
	t = 2*n;
	std::cout << sum_of_even_numbers(t);
	return 0;
}

int sum_of_even_numbers(int n)
{
	if(n==0)
	{
		return 0;
	}
	return (n + sum_of_even_numbers(n-2));
}
