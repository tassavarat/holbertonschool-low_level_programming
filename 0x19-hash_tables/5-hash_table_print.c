#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 *
 * Description: Prints key/value in order that they appear
 * in the array of hash table.
 * If ht is NULL, print nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int start;

	if (ht)
	{
		start = 1;
		printf("{");
		for (i = 0; i < ht->size; ++i)
		{
			if (ht->array[i])
			{
				current = ht->array[i];
				while (current)
				{
					if (!start)
						printf(", ");
					printf("'%s': '%s'", current->key, current->value);
					current = current->next;
				}
				start = 0;
			}
		}
		printf("}\n");
	}
}
