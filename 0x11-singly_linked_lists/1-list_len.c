#include "lists.h"

/**
 * list_len - Returns number of elements in linked list
 * @h: Pointer to a list
 *
 * Return: Number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		++i;
	}
	return (i);
}
