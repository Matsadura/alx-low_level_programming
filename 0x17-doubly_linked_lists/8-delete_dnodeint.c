#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a note at
 *	and index in a doubly linked list
 * @head: the head of the list
 * @index: the index of the node
 * Return: 1 if it succeeded, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *length = *head;
	unsigned int len = 0, count = 0;


	while (length)
	{
		length = length->next;
		len++;
	}

	if (*head == NULL || index > len)
		return (-1);

	while (count < index)
	{
		current = current->next;
		count++;
	}

	if (index == 0)
	{
		current = *head;
		*head = current->next;
		if (current->next)
		{
			if (len != 0)
				(current->next)->prev = *head;
			else
				current->prev = NULL;
		}
	}
	else
	{
		(current->prev)->next = current->next;
		(current->next)->prev = current->prev;
	}
	free(current);
	return (1);
}
