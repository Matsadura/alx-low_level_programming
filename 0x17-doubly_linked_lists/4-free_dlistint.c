#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head;
		head = current->next;
		current->prev = head;
		free(current);
	}
}
