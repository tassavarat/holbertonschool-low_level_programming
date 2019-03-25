#include "lists.h"

/**
 * listint_len - Returns number of elements in a linked list
 * @h: Pointer to a list
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		++i;
	}
	return (i);
}
