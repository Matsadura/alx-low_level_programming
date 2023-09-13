#include <stdlib.h>
#include <stdio.h>

/**
 * op_codes -> Print the opcodes
 * @a: Input Address
 * @n: Bytes Number
 */

void op_codes(char *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%.2hhx", a[j]);
		if (j < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Prints the opcodes of its own main function
 * @ac: Input Arg
 * @av: Input String
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int i;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(av[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	op_codes((char *) &main, i);
	return (0);
}
