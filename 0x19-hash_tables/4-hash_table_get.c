#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table to search
 * @key: Key to find
 *
 * Return: Value associated with the element, NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (ht && key)
	{
		idx = key_index((unsigned char *)key, ht->size);
		current = ht->array[idx];
		while (current)
		{
			if (!strcmp(current->key, key))
				return (current->value);
			current = current->next;
		}
	}
	return (NULL);
}
