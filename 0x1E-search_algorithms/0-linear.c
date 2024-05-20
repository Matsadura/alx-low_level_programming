#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *	using the Lienar search algorithm
 * @array: A pointer to the first element of the array
 *	to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
