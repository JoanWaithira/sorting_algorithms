#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of integers
 * @list: pointer to the head of a doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *sorted, *next_node;

	if (!list || !(*list) || !(*list)->next)
	{
		return;
	}
	current = (*list)->next;
	while (current)
	{
		next_node = current->next;
		sorted = current->prev;


		while (sorted && sorted->n > current->n)
		{
			sorted->next = current->next;
			if (current->next)
			{
				current->next->prev = sorted;
			}
			current->prev = sorted->prev;
			current->next = sorted;

			if (sorted->prev)
			{
				sorted->prev->next = current;
			}
			else
			{
				(*list) = current;
			}
			sorted->prev = current;

			print_list(*list);
			sorted = current->prev;
		}
		current = next_node;
	}
}

