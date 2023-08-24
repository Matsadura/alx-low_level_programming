#include "main.h"
/**
 * reverse_array - reverses the content of an
 *	array of integers
 * @a: an array of integers
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i, tmp;
	int j1 = n / 2, j2 = (n - 1) / 2;

	if (n == 0)
		a[0] = 0;

	if (n % 2 == 0)
	{
		for (i = 0 ; i <= j1; i++)
		{
			tmp = *(a + i);
			*(a + i) = *(a + n - 1 - i);
			*(a + n - 1 - i) = tmp;
		}
	}
	else
	{
		for (i = 0 ; i < j2; i++)
		{
			tmp = *(a + i);
			*(a + i) = *(a + n - 1 - i);
			*(a + n - 1 - i) = tmp;

		}
	}

}
