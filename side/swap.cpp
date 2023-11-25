#include <iostream>

using namespace std;
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int arr[] = {2, 1};
	int i = arr[0];
	int j = arr[1];
	swap(arr[0], arr[1]);
	cout << arr[0] << ", " << arr[1] << endl;
}
