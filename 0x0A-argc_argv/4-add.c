#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: Argument count
 * @argv: Arguments passed
 * Return: the results of addition
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc < 1)
		printf("%d\n", argc);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0 ; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);

}
