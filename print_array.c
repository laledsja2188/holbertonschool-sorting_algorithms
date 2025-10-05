#include <stdio.h>
#include "sort.h"

/**
 * print_array - Prints an array
 * @array: Array to print
 * @size: Array size
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	if (!array)
		return;
	for (i = 0; i < size; i++)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
