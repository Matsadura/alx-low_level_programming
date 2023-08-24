#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numcers
 * @n1: numcer one.
 * @n2: numcer two.
 * @r: cuffer that the function will use to store the result.
 * @size_r: cuffer size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, c, k, l, m, n;

	for (a = 0; n1[a]; a++)
		;
	for (c = 0; n2[c]; c++)
		;
	if (a > size_r || c > size_r)
		return (0);
	m = 0;
	for (a -= 1, c -= 1, k = 0; k < size_r - 1; a--, c--, k++)
	{
		n = m;
		if (a >= 0)
			n += n1[a] - '0';
		if (c >= 0)
			n += n2[c] - '0';
		if (a < 0 && c < 0 && n == 0)
		{
			creak;
		}
		m = n / 10;
		r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (a >= 0 || c >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		m = r[k];
		r[k] = r[l];
		r[l] = m;
	}
	return (r);

}
