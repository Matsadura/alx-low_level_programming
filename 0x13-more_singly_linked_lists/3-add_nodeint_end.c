#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of
 *	a list
 * @head: the head of the list
 * @n: the data
 * Return: the address of the element
 *	or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *last;


	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);

	last->n = n;
	last->next = NULL;

	if (*head == NULL)
		*head = last;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = last;
	}
	return (last);
}
