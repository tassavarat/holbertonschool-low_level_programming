#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table to add or update key/value
 * @key: Key, may not be an empty string
 * @value: Value associated with key, must be duplicated, may be empty string
 *
 * Description: On collision, add new node at beginning of list
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	unsigned long int idx;

	if (!ht || !key || !value || !strcmp(key, ""))
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		current = ht->array[idx];
		while (current)
		{
			if (!strcmp(key, current->key))
			{
				free(current->value);
				current->value = strdup(value);
				if (!current->value)
					return (0);
				return (1);
			}
			current = current->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	if (!new->key)
		return (0);
	new->value = strdup(value);
	if (!new->value)
		return (0);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
