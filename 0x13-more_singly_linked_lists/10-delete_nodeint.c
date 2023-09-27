#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 *	index of a linked list
 * @head: the head of the list
 * @index: the index
 * Return: 1 if succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *tmp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (i < index - 1)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
