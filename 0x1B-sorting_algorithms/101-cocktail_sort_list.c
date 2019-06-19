#include "sort.h"

/**
 * swapp_list - Swaps linked list nodes then prints list
 * @list: Linked list to swap
 * @n1: First node
 * @n2: Second node
 */
void swapp_list (listint_t **list, listint_t *n1, listint_t *n2)
{
	if (n1->prev)
		n1->prev->next = n2;
	else
		(*list) = n2;
	if (n2->next)
		n2->next->prev = n1;
	n2->prev = n1->prev;
	n1->next = n2->next;
	n2->next = n1;
	n1->prev = n2;
	print_list(*list);
}

/**
 * cocktail_sort_list - Cocktail shaker sort
 * @list: Linked list to sort
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current;
	int swp;

	swp = 1;
	if (list)
	{
		current = *list;
		while (swp)
		{
			swp = 0;
			while (current->next)
			{
				if (current->n > current->next->n)
				{
					swapp_list(*&list, current, current->next);
					swp = 1;
				}
				else
					current = current->next;
			}
			if (!swp)
				break;
			while (current->prev)
			{
				if (current->n < current->prev->n)
				{
					swapp_list(*&list, current->prev, current);
					swp = 1;
				}
				else
					current = current->prev;
			}
		}
	}
}
