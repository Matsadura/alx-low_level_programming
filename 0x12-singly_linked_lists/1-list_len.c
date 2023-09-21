#include "lists.h"

/**
 * list_len - returns the number of elements
 *	of a linked list
 * @h: the head of the list
 * Return: the number of elemnts
 */

size_t list_len(const list_t *h)
{
	size_t len;
	const list_t *current = h;

	for (len = 0; current != NULL; len++)
	{
		current = current->next;
	}
	return (len);
}
