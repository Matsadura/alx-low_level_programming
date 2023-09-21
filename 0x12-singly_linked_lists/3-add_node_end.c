#include "lists.h"

/**
 * add_node_end - adds a node at the end of the
 *	list
 * @head: the head of the list
 * @str: the element
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new, *current;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		for (i = 0; current->next != NULL; i++)
			current = current->next;

		current->next = new;
	}
	return (new);
}
