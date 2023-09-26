#include "lists.h"

/**
 * insert_nodeint_at_index - insterts a node at
 *	a given position
 * @head: the head of the list
 * @idx: the index
 * @n: the data
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new = *head;
		*head = new;
		return (new);
	}

	current = *head;
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; current != NULL; i++)
	{
		if (i == idx - 1)
		{
			tmp = current->next;
			current->next = new;
			new->next = tmp;
			return (new);
		}

		current = current->next;
	}

	free(new);
	return (NULL);
}
