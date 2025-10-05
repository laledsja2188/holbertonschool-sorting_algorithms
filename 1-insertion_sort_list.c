#include "sort.h"

/**
 * swap_nodes - Swaps two nodes
 * @list: List head pointer
 * @node1: First node
 * @node2: Second node
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->prev = node1->prev;
	node2->next = node1;
	node1->prev = node2;
}

/**
 * insertion_sort_list - Sorts list using insertion sort
 * @list: List head pointer
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *node;

	if (!list || !*list || !(*list)->next)
		return;
	curr = (*list)->next;
	while (curr)
	{
		node = curr;
		curr = curr->next;
		while (node->prev && node->n < node->prev->n)
		{
			swap_nodes(list, node->prev, node);
			print_list(*list);
		}
	}
}