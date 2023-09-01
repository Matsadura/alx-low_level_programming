#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: the argument count
 * @argv: the arguments
 * Return: the number
 */

int main(int argc, char **argv)
{
	(void)**argv;

	printf("%d\n", argc - 1);
	return (0);
}
