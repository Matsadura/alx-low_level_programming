#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: the arguments
 * Return: The result of the multiplication or 1
 */

int main(int argc, char **argv)
{
	int i, mul = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc ; i++)
			mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}
