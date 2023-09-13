#include "function_pointers.h"

/**
 * int_index - searches for an intege
 * @array: the array
 * @size: the size of the array
 * @cmp: function pointer
 * Return: the indext of the first element
 *	if no element matches, return -1
 *	if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
