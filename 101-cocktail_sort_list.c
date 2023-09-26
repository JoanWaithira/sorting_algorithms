#include "sort.h"

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers
 *                     in ascending order using Cocktail shaker sort.
 * @list: Pointer to the pointer to the head of the linked list.
 */
void cocktail_sort_list(listint_t **list)
{
	int swapped = 0;
	listint_t *start = *list, *end = NULL, *curr = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	do {
		curr = start;
		while (curr->next != end)
		{
			if (curr->n > curr->next->n)
			{
				swap_nodes(curr, curr->next);
				print_list(*list);
				swapped = 1;
			}
			else
				curr = curr->next;
		}
		if (swapped == 0)
		{
			break;
		}
		swapped = 0;
		end = curr;
		while (curr->prev != start)
		{
			if (curr->n < curr->prev->n)
			{
				swap_nodes(curr->prev, curr);
				print_list(*list);
				swapped = 1;
			}
			else
				curr = curr->prev;
		}
	start = curr;
	}
	while (swapped);
}

/**
 * swap_nodes - Swaps two nodes in a doubly linked list.
 * @a: First node to swap.
 * @b: Second node to swap.
 */
void swap_nodes(listint_t *a, listint_t *b)
{
	if (a->prev != NULL)
	{
		a->prev->next = b;
	}
	if (b->next != NULL)
	{
		b->next->prev = a;
	}
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
	if (a->next != NULL)
	{
		a->next->prev = a;
	}
	if (b->prev == NULL)
	{
		b->next = b;
	}
}

