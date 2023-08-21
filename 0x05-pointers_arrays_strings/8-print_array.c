#include "main.h"

/**
 * print_array - prints an array of integers
 * @a: the array
 * @n: numbers of elements of it
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i <= n - 1; i++)
	{
		if (i == 0)
			printf("%d", *(a + i));
		else
			printf(", %d", *(a + i));
	}
	printf("\n");
}
