#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: Pointer to list being freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
