#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: the width
 * @height: the height
 * Return: the pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int**)malloc(sizeof(int*) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int*) * width);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
