#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to a struct
 *
 * Return: Number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;

	while (head && head > head->next)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		++c;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
		++c;
	}
	return (c);
}
