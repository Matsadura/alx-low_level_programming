#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: the amount of memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
