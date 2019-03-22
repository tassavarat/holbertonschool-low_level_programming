#include "lists.h"

/**
 * free_list - Frees a list
 * @head: Pointer to a struct
 */
void free_list(list_t *head)
{
	list_t *new;
	list_t *old = head;

	if (head)
	{
		while (old->next)
		{
			free(old->str);
			new = old->next;
			free(old);
			old = new;
		}
			free(old->str);
			free(old);
	}
}
