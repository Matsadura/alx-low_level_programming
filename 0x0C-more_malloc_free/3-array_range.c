#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: the first bytes of the memory area
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		*(s + i) = b;
	}
	return (s);
}


/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: size of each element
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = (void *)malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, nmemb * size);

	return (arr);
}


/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr, i, j = 0;

	if (min > max)
		return (NULL);

	arr = _calloc(max - min + 1, sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}
