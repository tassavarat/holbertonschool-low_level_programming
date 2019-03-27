#include "lists.h"

/**
 * free_listint_safe - Prints a linked list
 * @h: Pointer to address of a list
 *
 * Return: Size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *tmp;

	while (*h && *h > (*h)->next)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		++c;
	}
	if (*h)
	{
		free(*h);
		++c;
	}
	*h = NULL;
	return (c);
}

