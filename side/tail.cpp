#include <iostream>

using namespace std;

void swap(int *a, int *b);
void cocktail(int arr[], int n);
int main()
{
	int arr[] = {4, 7, 3, 7, 2, 1, 9, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	cocktail(arr, size);

	for (int i = 0; i < size; ++i)
		cout << arr[i] << ", ";
	cout << endl;

	return (0);
}

void cocktail(int arr[], int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		int j;
		for (j = 0; j < n - i - 1; ++j)
		{
			if (arr[j+1] < arr[j])
			{
				swap(arr[j], arr[j+1]);
			}
		}
		for (int k =  j - 1; k > j; ++k)
		{
			if (arr[k] < arr[k-1])
			{
				swap(arr[k-1], arr[k]);
			}
		}
	}
}

void swap(int *a, int *b)
{
	int temp = *a; 
	*a = *b;
	*b = temp;
}
