#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: argument count
 * @argv: argument passed
 * Return: all arguments
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
