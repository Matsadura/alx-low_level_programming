#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @arr: Pointer to the first index of the array to print
 * @Left: The starting index of the array
 * @Right: The last index of the array
 */
void print_array(int *arr, size_t Left, size_t Right)
{
	size_t i;

	i = Left;
	while (i != Right + 1)
	{
		if (i == Left)
			printf("%d", arr[i]);
		else
			printf(", %d", arr[i]);
		i++;
	}
	printf("\n");
}

/**
 * _binary_search - Searches for a value in a sorted array
 *	of integers using the Binary search algorithm
 * @array: A poitner to the first element of the arrays to search in
 * @left: The beginning index of the array
 * @right: The last index of the array
 * @value: The value to search for
 * Return: The index where value is located or -1
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t L, R, M;

	L = left;
	R = right - 1;

	if (!array || L > R)
		return (-1);

	while (L <= R)
	{
		M = (L + R) / 2;
		printf("Searching in array: ");
		print_array(array, L, R);
		if (L > R)
			return (-1);
		if (value > array[M])
			L = M + 1;
		else if (value < array[M])
			R = M - 1;
		else
			return (M);
	}
	return (-1);
}


/**
 * exponential_search - Searches for a value in a sorted array
 *	of integers using the Interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is locator or -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t range;
	int result;

	if (!array || size == 0)
		return (-1);
	range = 1;
	while (range <= size)
	{
		if (array[range] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", range, array[range]);
			if (range * 2 >= size)
				range = size;
			else
				range *= 2;
		}
		else if (array[range] > value)
		{
			if (range > size - 1)
			{
				printf("Value found between indexes [%ld] and [%ld]\n",
						range / 2, range - 1);
				result = _binary_search(array, range / 2, size - 1, value);
			}
			else if (range > size - 1)
			{
				printf("Value found between indexes [%ld] and [%ld]\n",
						range / 2, range);
				result = _binary_search(array, range / 2, range + 1, value);
			}
			else
			{
				printf("Value found between indexes [%ld] and [%ld]\n",
						range / 2, range);
				result = _binary_search(array, range / 2, range, value);
			}
			return (result);
		}
	}
	return (-1);
}
