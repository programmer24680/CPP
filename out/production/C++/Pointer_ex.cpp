#include <iostream>
void print(int*, int);
int* apply_all(int*, int, int*, int);

int main()
{
	using std::cout;
	int array1[] {1, 2, 3, 4, 5};
	int array2[] {10, 20, 30};

	cout <<  "Array 1: ";
	print(array1, 5);
	
	cout << "Array 2: ";
	print(array2, 3);

	int* results = apply_all(array1, 5, array2, 3);
	cout << "Result: ";
	print(results, 15);
}

int* apply_all(int* array1, int size1, int* array2, int size2)
{
	int* array3 {0};
	array3 = new int[size1*size2];
	int i {0};
	// int j {0};
	// int k {0};
	for(int j = 0; j<size1; j++)
	{
		for(int k = 0; k<size2; k++)
		{
			*(array3+i) = (*(array1+j)) * (*(array2+k));
			i++;
		}
	}
	return array3;
}

void print(int* array, int size)
{
	for(int i = 0; i<size; i++)
	{
		std::cout << *(array+i) << " ";
	}
	std::cout <<std::endl;
	return;
}
