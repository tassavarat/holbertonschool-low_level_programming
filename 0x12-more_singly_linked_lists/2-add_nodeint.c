#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: Pointer to address of a list
 * @n: Integer
 *
 * Return: Address of new element
 * NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
		return (*head);
}
