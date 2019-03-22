#include "lists.h"

/**
 * free_list - Frees a list
 * @head: Pointer to a struct
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
