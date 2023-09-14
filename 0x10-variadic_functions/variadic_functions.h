#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct formats
{
	char c;
	void (*f)(va_list);
} _struct;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void _char(va_list args);
void _int(va_list args);
void _float(va_list args);
void _str(va_list args);
#endif
