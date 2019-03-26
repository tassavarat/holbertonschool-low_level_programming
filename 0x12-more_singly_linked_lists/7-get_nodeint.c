#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node of a linked list
 * @head: Pointer to a struct
 * @index: Index of node
 *
 * Return: nth node of a linked list
 * Null if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		++i;
	}
	return (NULL);
}
