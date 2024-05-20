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
 * binary_search - Searches for a value in a sorted array
 *	of integers using the Binary search algorithm
 * @array: A poitner to the first element of the arrays to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L, R, M;

	L = 0;
	R = size - 1;

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
