#include "search_algos.h"

/**
 * get_pos - Caluclates the probe position
 * @array: A pointer to the first element of the array
 * @low: The lowest index
 * @high: The highest Index
 * @value: The value we're searching for
 * Return: The probe position
 */
size_t get_pos(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	return (pos);
}

/**
 * interpolation_search - Searches for a value in a sorted array
 *	of integers using the Interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is locator or -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (!array || size == 0)
		return (-1);

	low = 0;
	high = size - 1;
	pos = get_pos(array, low, high, value);
	if (pos >= size)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	while (low < high)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] < value)
			low = pos + 1;
		pos = get_pos(array, low, high, value);
	}

	return (-1);
}
