#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by \n
 * @separator: the string to be printed between
 *	numbers
 * @n: the number of integers passed to the f()
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0 || separator == NULL)
			printf("%d", va_arg(num, int));
		else if (i > 0)
			printf("%s%d", separator, va_arg(num, int));
	}
	va_end(num);
	printf("\n");
}
