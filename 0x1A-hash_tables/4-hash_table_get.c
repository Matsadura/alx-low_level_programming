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
	unsigned long int index = key_index((const unsigned char *) key, ht->size);

	if (ht->array[index] != NULL &&
			strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	return (NULL);
}
