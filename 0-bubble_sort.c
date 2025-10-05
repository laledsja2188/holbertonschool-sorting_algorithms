#include "sort.h"

/**
 * bubble_sort - Sorts array using bubble sort
 * @array: Array to sort
 * @size: Array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t pass, idx;
	int tmp, changed;

	if (!array || size < 2)
		return;

	for (pass = 0; pass < size - 1; pass++)
	{
		changed = 0;
		for (idx = 0; idx < size - 1 - pass; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				tmp = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = tmp;
				changed = 1;
				print_array(array, size);
			}
		}
		if (!changed)
			break;
	}
}

