#include "hash_tables.h"

/**
 * hash_table_get - Retrives a value associated
 *	with a key
 * @ht: the hash table to look into
 * @key: the key we are looking for
 * Return: the value associated with the element
 *	or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL
			|| key == NULL || strlen(key) == 0 ||
			ht->size == 0)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (current->key != NULL && strlen(current->key) != 0 &&
				strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
