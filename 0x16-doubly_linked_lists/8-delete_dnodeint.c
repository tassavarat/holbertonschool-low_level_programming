#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: Pointer to a pointer of first node
 * @index: Index of node that should be deleted starting at 0
 *
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!*head)
		return (-1);
	current = *head;
	i = 1;

	while (i < index)
	{
		if (!current)
			return (-1);
		++i;
		current = current->next;
	}
	if (index)
	{
		current->next = current->next->next;
		current = current->next->next;
		current->prev = current->prev->prev;
		current = current->prev;
	}
	else
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
	}
	free(current);
	return (1);
}
