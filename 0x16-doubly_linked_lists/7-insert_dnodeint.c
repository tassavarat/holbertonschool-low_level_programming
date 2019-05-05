#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to pointer of first node
 * @idx: Index of the list where the new node should be added
 * @n: Value to be assigned to node
 *
 * Return: Address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;
	unsigned int i;

	current = *h;
	i = 1;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	while (i < idx)
	{
		if (!current)
			return (NULL);
		++i;
		current = current->next;
	}
	if (idx)
	{
		new->prev = current;
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->prev = NULL;
		new->next = current;
		current->prev = new;
		*h = new;
	}
	new->n = n;
	return (new);
}
