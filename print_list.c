#include "sort.h"
#include <stdio.h>

/**
 * print_list - Prints a list
 * @list: List to print
 */
void print_list(const listint_t *list)
{
	int count = 0;

	while (list)
	{
		if (count++)
			printf(", ");
		printf("%d", list->n);
		list = list->next;
	}
	printf("\n");
}
