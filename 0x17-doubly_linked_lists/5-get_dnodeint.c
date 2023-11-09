#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 *	of a doubly linked list
 * @head: the head of the list
 * @index: the index of the node
 * Return: the node at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len = 0;
	dlistint_t *current = head;



	while (len < index)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		len++;
	}

	return (current);
}
