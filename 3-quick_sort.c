#include "sort.h"

/**
 * swap - Swaps two integers in an array and prints the array
 * @array: The array
 * @i: First index
 * @j: Second index
 * @size: Size of the array
 */
void swap(int *array, size_t i, size_t j, size_t size)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
	print_array(array, size);
}

/**
 * lomuto_partition - Lomuto partition scheme for quick sort
 * @array: The array to partition
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array
 *
 * Return: The partition index
 */
size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low;
	size_t j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(array, i, j, size);
			}
			i++;
		}
	}
	if (i != high && array[i] != array[high])
	{
		swap(array, i, high, size);
	}
	return (i);
}

/**
 * quick_sort_recursive - Recursive function for quick sort
 * @array: The array to sort
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array
 */
void quick_sort_recursive(int *array, size_t low, size_t high, size_t size)
{
	size_t pivot_index;

	if (low < high)
	{
		pivot_index = lomuto_partition(array, low, high, size);
		if (pivot_index > 0)
			quick_sort_recursive(array, low, pivot_index - 1, size);
		quick_sort_recursive(array, pivot_index + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using Quick sort algorithm with Lomuto partition
 * @array: The array to be sorted
 * @size: Number of elements in @array
 *
 * Description: Prints the array after each swap
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
