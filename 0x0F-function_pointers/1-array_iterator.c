#include "function_pointers.h"

/**
 * array_iterator - executes a function gives a
 *	parameter on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to the function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (action == NULL || size == 0 || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
