#include "lists.h"
/**
 * sum_listint - sums all the data
 * @head: the head
 * Return: the result
 */

int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (current == NULL)
		return (0);

	while (current->next != NULL)
	{
		current = current->next;
		sum = sum + current->n;
	}
	return (sum);
}
