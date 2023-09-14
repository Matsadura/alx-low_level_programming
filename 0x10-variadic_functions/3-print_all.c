#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints anything
 * @format: the type of argument
 */

void print_all(const char * const format, ...)
{
	int j = 0, z = 0;
	va_list all;
	char *s;

	va_start(all, format);
	while (format[j] != '\0')
	{
		switch (format[j])
		{
			case 'c':
				z = 1;
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				z = 1;
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				z = 1;
				printf("%f", va_arg(all, double));
				break;
			case 's':
				s = va_arg(all, char *);
				z = 1;
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				z = 0;
				break;
		}
		j++;
		if (z == 1 && j > 0 && format[j] != '\0')
			printf(", ");
	}
	va_end(all);
	printf("\n");
}
