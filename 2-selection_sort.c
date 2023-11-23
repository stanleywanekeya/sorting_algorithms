#include "sort.h"

/**
 * selection_sort - sorts array by selecting
 * least value index
 * @array: array to be sorted
 * @size: size of the array
 * Return: if array is sorted
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int temp;

	i = j = 0;
	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; ++i)
	{
		idx = i;
		for (j = i + 1; j < size; ++j)
		{
			if (array[j] < array[idx])
			{
				idx = j;
			}
		}
		if (i != idx)
		{
			temp = array[i];
			array[i] = array[idx];
			array[idx] = temp;
			print_array(array, size);
		}
	}
}
