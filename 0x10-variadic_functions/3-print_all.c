#include "variadic_functions.h"

/**
 * _char - Prints a character
 * @args: character to print (from va_list)
 *
 * Return: void
 */

void _char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * _int - Prints an integer
 * @args: integer to print (from va_list)
 *
 * Return: void
 */

void _int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * _float - Prints a float number
 * @args: number to print (from va_list)
 *
 * Return: void
 */

void _float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * _str - Prints a string
 * @args: string to print (from va_list)
 *
 * Return: void
 */

void _str(va_list args)
{
	char *str = va_arg(args, char *);

	printf("%s", str == NULL ? "(nil)" : str);
}

/**
 * print_all - Prints argument depending on its format
 * @format: string of format chars
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list args;

	_struct arr[] = {
		{'c', _char},
		{'i', _int},
		{'f', _float},
		{'s', _str},
	};

	va_start(args, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (j < 5)
		{
			if (format[i] == arr[j].c)
			{
				arr[j].f(args);
				if (format[i + 1])
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
