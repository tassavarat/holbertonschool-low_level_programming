#include "lists.h"

/**
 * print_dlistint - Prints all elements of a linked list
 * @h: Pointer to first node of linked list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t n;

	current = h;
	n = 0;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		++n;
	}
	return (n);
}
