#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end
 *	of a doubly linked list
 * @head: the head of the list
 * @n: the value of the new node
 * Return: the address of the new elements
 *	or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next)
	{
		current = current->next;
	}
	current->next = new_node;
	new_node->prev = current;
	new_node->next = NULL;

	return (new_node);
}
