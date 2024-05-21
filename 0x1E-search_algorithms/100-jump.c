#include "search_algos.h"

/**
 * _linear_search - Searches for a value in an jump block
 *	using the Lienar search algorithm
 * @array: A pointer to the first element of the array
 *	to search in
 * @left: The starting index of the block
 * @right: The ending index of the block
 * @value: The value to search for
 * Return: The first index where value is located or -1 otherwise
 */
int _linear_search(int *array, size_t left, size_t right, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (i = left; i < right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

/**
 * jump_search - Searches for a value in a sorted array of integers
 *	using the Jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located or -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t L, R, M, Result;

	if (!array || size == 0)
		return (-1);
	M = sqrt(size);
	L = 0;
	R = M;

	while (size > L)
	{
		if (array[L] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					L - M, L);
			Result = _linear_search(array, L - M, L + 1, value);
					return (Result);
		}
		printf("Value checked array[%ld] = [%d]\n", L, array[L]);

		L = L + M;
		if (size <= L)
			break;
		if ((R + M) > size)
			R = size;
		else
			R = R + M;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", L - M, L);
	Result = _linear_search(array, L - M, size, value);
	return (Result);
}
