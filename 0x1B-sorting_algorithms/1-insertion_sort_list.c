#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *cur_tmp;
	int sort;

	current = (*list)->next;
	sort = 0;

	while (current)
	{
		tmp = current->prev;
		cur_tmp = current->next;
		while (tmp && current->n < tmp->n)
		{
			tmp = tmp->prev;
			sort = 1;
		}
		if (sort)
		{
			if (tmp)
				tmp->next = current;
			else
			{
				(*list) = current;
			}
			current->next = current->prev;
			current->next->next = cur_tmp;
			if (cur_tmp)
			{
				cur_tmp->prev = current->next;
				cur_tmp->prev->prev = current;
			}
			else
			{
				current->next->prev = current;
			}
			current->prev = tmp;
			print_list(*list);
		}
		current = cur_tmp;
		sort = 0;
	}
}
