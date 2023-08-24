#include "main.h"

/**
 * reverse_array - reverses the content of an
 *	array of integers
 * @a: the array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, tmp, j = n - 1;

	for (i = 0; i < j ; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}

