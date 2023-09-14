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
		char *s = va_arg(str, char *);

		if (i == 0 || separator == NULL)
		{
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		else if (i > 0)
		{
			if (s == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, s);
		}
	}
	va_end(str);
	printf("\n");
}
