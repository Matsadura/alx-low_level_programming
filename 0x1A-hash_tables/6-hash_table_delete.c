#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *next;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			if (current->value != NULL)
				free(current->value);
			if (current->key != NULL)
				free(current->key);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}
