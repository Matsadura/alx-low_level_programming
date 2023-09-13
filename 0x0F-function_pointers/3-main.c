#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (strcmp(op, "/") != 0 && strcmp(op, "*") != 0
			&& strcmp(op, "+") != 0 && strcmp(op, "%") != 0 && strcmp(op, "-") != 0)
	{
		printf("Error\n");
		exit(99);
	}


	if ((strcmp(argv[2], "/") == 0 && b == 0)
			|| (strcmp(argv[2], "%") == 0 && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
