#include "lists.h"

/**
 * dlistint_len - Returns number of elements in linked list
 * @h: Pointer to first node of linked list
 *
 * Return: Number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n;

	current = h;
	n = 0;
	while (current)
	{
		current = current->next;
		++n;
	}
	return (n);
}

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

	if ((!current && idx) || idx > dlistint_len(*h))
		return (NULL);
	while (i < idx)
	{
		if (!current)
			return (NULL);
		++i;
		current = current->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx)
	{
		new->prev = current;
		new->next = current->next;
		current->next = new;
		if (new->next)
		{
			current = new->next;
			current->prev = new;
		}
	}
	else
	{
		new->prev = NULL;
		new->next = current;
		if (new->next)
			current->prev = new;
		*h = new;
	}
	new->n = n;
	return (new);
}
