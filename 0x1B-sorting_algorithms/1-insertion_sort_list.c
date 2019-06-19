#include "sort.h"

/**
 * swapp_list - Swaps linked list nodes then prints list
 * @list: Linked list to sort
 * @current: Current node
 * @tmp: Node before current
 * @cur_tmp: Node after current
 */
void swapp_list(listint_t **list, listint_t *current, listint_t *tmp,
		listint_t *cur_tmp)
{
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
}
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
			swapp_list(*&list, current, tmp, cur_tmp);
			current = cur_tmp;
		}
	}
}
