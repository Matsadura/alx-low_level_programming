#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: the type of argument
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	va_list all;
	char *s;

	va_start(all, format);
	while (format[j] != '\0')
	{
		int z = 0;

		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				break;
			case 'i':
				printf("%d", va_arg(all, int));
				break;
			case 'f':
				printf("%f", va_arg(all, double));
				break;
			case 's':
				s = va_arg(all, char *);
				if (s != NULL)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
			default:
				z = 1;
				break;
		}
		j++;
		if (z == 0 && j > 0 && format[j] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(all);
}
