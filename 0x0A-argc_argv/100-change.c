#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 *	to make change for an amount of money
 * @argc: argument count
 * @argv: argument passed
 * Return: The number
 */

int main(int argc, char **argv)
{
	int change = 0, coins;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (change > 0)
	{
		if (change >= 25)
			change -= 25;
		else if (change >= 10)
			change -= 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 2)
			change -= 2;
		else if (change >= 1)
			change -= 1;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
