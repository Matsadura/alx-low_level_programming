#include "lists.h"

/**
 * print_dlistint - prints all elements of a
 *	doubly linked list
 * @h: the head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}
	return (len);
}
