#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * Pointer to a struct
 *
 * Return: Head node's data (n)
 * 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num = (*head)->n;

	if (!*head)
		return (0);
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (num);	
}
