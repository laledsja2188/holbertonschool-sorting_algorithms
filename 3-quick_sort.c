#include "sort.h"

/**
 * swap - Swaps two elements
 * @array: Array
 * @i: First index
 * @j: Second index
 * @size: Array size
 */
void swap(int *array, size_t i, size_t j, size_t size)
{
	int temp = array[i];
	
	array[i] = array[j];
	array[j] = temp;
	print_array(array, size);
}

/**
 * partition - Partitions array
 * @array: Array to partition
 * @low: Start index
 * @high: End index
 * @size: Array size
 *
 * Return: Partition index
 */
size_t partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
				swap(array, i, j, size);
			i++;
		}
	}
	if (i != high && array[i] != array[high])
		swap(array, i, high, size);
	return (i);
}

/**
 * qsort_rec - Recursive quick sort
 * @array: Array to sort
 * @low: Start index
 * @high: End index
 * @size: Array size
 */
void qsort_rec(int *array, size_t low, size_t high, size_t size)
{
	size_t pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		if (pi > 0)
			qsort_rec(array, low, pi - 1, size);
		qsort_rec(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - Sorts array using quick sort
 * @array: Array to sort
 * @size: Array size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qsort_rec(array, 0, size - 1, size);
}
