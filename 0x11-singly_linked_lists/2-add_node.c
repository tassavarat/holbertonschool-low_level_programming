#include "lists.h"

/**
 * _strlen - Returns the length of a string
 * @s: String being evaluated
 *
 * Return: Length of string
 */
int _strlen(const char *s)
{
	unsigned int i = 0;

	while (*s++)
		++i;
	return (i);
}

/**
 * add_node - Adds a node at the beginning of a list
 * @head: Pointer to address of a list
 * @str: Pointer to string
 *
 * Return: Address of new element
 * On error, NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
