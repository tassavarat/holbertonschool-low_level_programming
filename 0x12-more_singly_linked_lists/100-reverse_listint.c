#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to address of a list
 *
 * Return: Pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *cur = *head;

	*head = NULL;
	while (cur)
	{
		tmp = tmp->next;
		cur->next = *head;
		*head = cur;
		cur = tmp;
	}
	return (*head);
}
