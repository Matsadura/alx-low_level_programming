#include "hash_tables.h"

/**
 * handle_coll - handles the collision
 * @ht: the hash table
 * @i: the index of the key
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if succeeded, 0 otherwise
 */

int handle_coll(hash_table_t *ht, size_t i, const char *key, const char *value)
{
	hash_node_t *new, *current;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key), free(new);
		return (0);
	}
	current = ht->array[i];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				free(new->key);
				free(new);
				return (0);
			}
			free(new->key);
			free(new->value);
			free(new);
			return (1);
		}
		current = current->next;
	}
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}

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
		handle_coll(ht, index, key, value);
	}
	return (1);
}
