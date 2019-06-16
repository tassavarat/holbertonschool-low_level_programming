#include "sort.h"

/**
 * insertion_sort_list - Insertion sort algorithm
 * @list: Linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *cur_tmp;

	if (list)
	{
		current = (*list)->next;
		while (current)
		{
			tmp = current->prev;
			cur_tmp = current->next;
			while (tmp && current->n < tmp->n)
			{
				if (tmp->prev)
					tmp->prev->next = current;
				else
					(*list) = current;
				current->next = tmp;
				tmp->next = cur_tmp;
				if (cur_tmp)
					cur_tmp->prev = tmp;
				current->prev = tmp->prev;
				tmp->prev = current;
				print_list(*list);
				tmp = current->prev;
				cur_tmp = current->next;
			}
			current = cur_tmp;
		}
	}
}
