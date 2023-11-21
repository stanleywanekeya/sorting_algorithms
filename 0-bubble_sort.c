#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: array of integers
 * @size: size of array
 * return: returns if array is less than two
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; ++i)
	{
		for (j = i + 1; j < size; ++j)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		print_array(array, size);
	}
}
