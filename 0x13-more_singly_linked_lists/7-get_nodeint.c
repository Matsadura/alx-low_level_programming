#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 *	at a linked list
 * @head: the head of the list
 * @index: the index
 * Return: the nth node or NULL if
 *	it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;
	return (current);
}
