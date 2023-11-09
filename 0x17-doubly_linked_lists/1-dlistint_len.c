#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 *	in a doubly linked list
 * @h: the head
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current)
	{
		current = current->next;
		len++;
	}
	return (len);
}
