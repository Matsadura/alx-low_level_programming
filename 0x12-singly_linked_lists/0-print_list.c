#include "lists.h"

/**
 * print_list - prints all the elements of linkedlist
 * @h: the head of the list
 * Return: the number of elements
 */

size_t print_list(const list_t *h)
{
	int n;
	size_t len;
	const list_t *current = h;


	for (len = 0; current != NULL; len++)
	{
		if (current->str == NULL)
		{
			n = 0;
			printf("[%d] (nil)\n", n);
		}
		else
		{
			n = strlen(current->str);
			printf("[%d] %s\n", n, current->str);
		}
		current = current->next;
	}
	return (len);
}
