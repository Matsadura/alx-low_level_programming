#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by \n
 * @separator: the string to be printed between
 *	the strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0 || separator == NULL)
			printf("%s", va_arg(str, char *));
		else if (i > 0)
			printf("%s%s", separator, va_arg(str, char *));
	}
	va_end(str);
	printf("\n");
}
