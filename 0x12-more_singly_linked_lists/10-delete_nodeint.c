#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index
 * @head: Pointer to address of a list
 * @index: Index of the list where node should be deleted
 *
 * Return: 1 on success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *resume;

	if (!tmp)
		return (-1);
	while (*head && index)
	{
		if (!tmp)
			return (-1);
		if (i == index - 1)
			break;
		tmp = tmp->next;
		++i;
	}
	if (index)
	{
		resume = tmp->next->next;
		free(tmp->next);
		tmp->next = resume;
	}
	else
	{
		*head = (*head)->next;
		free(tmp);
	}
	return (1);
}
