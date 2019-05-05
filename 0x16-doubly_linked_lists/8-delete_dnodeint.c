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
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: Pointer to a pointer of first node
 * @index: Index of node that should be deleted starting at 0
 *
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i;

	if (!*head || index > dlistint_len(*head))
		return (-1);
	tmp = *head;
	current = *head;
	i = 1;

	while (i < index)
	{
		if (!tmp)
			return (-1);
		++i;
		tmp = tmp->next;
	}
	if (index)
	{
		current = tmp->next;
		tmp->next = current->next;
		if (tmp->next)
		{
			tmp = tmp->next;
			tmp->prev = current->prev;
		}
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
