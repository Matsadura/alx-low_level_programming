#include "main.h"

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

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	return (arr);
}
