#include "main.h"

/**
 * create_array - creates and array of chars and
 *	initializes it with a specific char
 * @size: size of the array
 * @c: the specific char
 * Return: pointer to the array or NULL
 *	if it fails or size == 0
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
		arr[i] = c;

	return (arr);
}
