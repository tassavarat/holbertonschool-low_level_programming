#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list
 * @head: Pointer to start of list
 * @index: Index of node, starting from 0
 *
 * Return: Specified node of a linked list or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int n;

	current = head;
	n = 0;

	while (current)
	{
		if (n == index)
			return (current);
		current = current->next;
		++n;
	}
	return (NULL);
}
