#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash
 *	table
 * @ht: the hash table to add to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
		{
			free(ht->array[index]);
			return (0);
		}
		ht->array[index]->key = strdup(key);
		if (ht->array[index]->key == NULL)
		{
			free(ht->array[index]->key);
			return (0);
		}
		ht->array[index]->value = strdup(value);
		if (ht->array[index]->value == NULL)
		{
			free(ht->array[index]->value);
			free(ht->array[index]->key);
			free(ht->array[index]);
			return (0);
		}
		ht->array[index]->next = NULL;
	}
	else
	{
		hash_node_t *new;

		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		if (strcmp(new->key, key) == 0)
			free(new->value);
		new->value = strdup(value);
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
