#include "lists.h"

/**
 * pop_listint - deletes the head of the node
 *	of a list
 * @head: the head of the list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int tmp;

	if (current == NULL)
		return (0);

	tmp = current->n;
	*head = current->next;
	free(current);

	return (tmp);
}
