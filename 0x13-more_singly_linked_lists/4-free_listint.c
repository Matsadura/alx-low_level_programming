#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
