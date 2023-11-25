#include <iostream>

using namespace std;

void swap(int *a, int *b);
void heapify(int arr[], int n, int i);
void heapsort(int arr[], int n);
int main()
{
	int arr[] = {4, 1, 6, 2, 65, 20, 7, 22, 20, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	heapsort(arr, size);

	for (int i = 0; i < size; ++i)
		cout << arr[i] << ", ";
	cout << endl;
	return (0);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void heapify(int arr[], int n, int i)
{
	int largest = i;
	int left = i * 2;
	int right = i * 2 + 1;

	while (left <= n && arr[left] > arr[largest])
	{
		largest = left;
	}

	while (right <= n && arr[right] > arr[largest])
	{
		largest = right;
	}

	if (largest != i)
	{
		swap(arr[largest], arr[i]);
		heapify(arr, n, largest);
	}
}

void heapsort(int arr[], int n)
{
	for (int i = n/2; i >= 1; --i)
	{
		heapify(arr, n, i);
	}
	for (int i = n; i >= 1; --i)
	{
		swap(arr[1], arr[i]);
		heapify(arr, n, 1);
	}
}
