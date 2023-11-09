#include "lists.h"

/**
 * sum_dlistint - sums all the data n of a list
 * @head: the head of the list
 * Return: the sum of n
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *lenght = head, *current = head;
	int sum = 0, len = 0;

	while (lenght)
	{
		lenght = lenght->next;
		len++;
	}
	if (len == 0)
		return (0);

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
