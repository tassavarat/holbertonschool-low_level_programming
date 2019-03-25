#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: Pointer to address of a list
 * @n: Integer
 *
 * Return: Address of the new element
 * NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *old = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (old->next)
		old = old->next;
	old->next = new;
	return (new);
}
