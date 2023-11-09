#include "lists.h"

/**
 * insert_dnodeint_at_index - insets a new node
 *	at a given position
 * @h: the head of list
 * @idx: the position of the new node
 * @n: the data of the new node
 * Return: the address of the new node
 *	or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *length = *h, *new_node;
	unsigned int len = 0, count = 0;

	while (length)
	{
		length = length->next;
		len++;
	}
	if (len < idx)
		return (NULL);
	else if (len == idx)
		return (add_dnodeint_end(h, n));

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	while (count < idx)
	{
		current = current->next;
		count++;
	}

	new_node->next = current;
	new_node->prev = current->prev;
	(current->prev)->next = new_node;
	current->prev = new_node;
	return (new_node);
}
