#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *first, *swap, *temp;
	first = (*list)->next;

	for (; first != NULL; first = first->next)
	{
		swap = first;
		temp = swap->prev;

		while (temp && temp->n > swap->n)
		{
			temp->next = swap->next;
			swap->prev = temp->prev;
			swap->next = temp;
			temp->prev = swap;
			temp = swap->prev;
		}
		print_list(*list);
	}
}
