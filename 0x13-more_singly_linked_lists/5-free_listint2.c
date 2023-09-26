#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*head = NULL;
}
