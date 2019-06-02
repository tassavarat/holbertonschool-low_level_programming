#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *tmp;

	for (i = 0; ht && i < ht->size; ++i)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while ((tmp = current))
			{
				current = current->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
