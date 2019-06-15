#include "sort.h"

/*
 * insertion_sort_list - Insertion sort algorithm
 * @list: Linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *cur_tmp;

	current = (*list)->next;
	while (current)
	{
		tmp = current->prev;
		cur_tmp = current->next;
		while (tmp && current->n < tmp->n)
		{
			/*
			printf("#####################################\n");
			printf("##current->n is %d##\n", current->n);
			printf("##tmp->n is %d##\n", tmp->n);
			if (cur_tmp)
				printf("##cur_tmp->n is %d##\n", cur_tmp->n);
			else
				printf("cur_tmp is NULL\n");
			*/
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
			/*
			printf("##after current->n is %d##\n", current->n);
			if (tmp)
				printf("##after tmp->n is %d##\n", tmp->n);
			else
				printf("tmp is NULL\n");
			if (cur_tmp)
				printf("##after cur_tmp->n is %d##\n", cur_tmp->n);
			else
				printf("cur_tmp is NULL\n");
			*/
		}
		current = cur_tmp;
	}
}
