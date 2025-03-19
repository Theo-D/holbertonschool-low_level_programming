#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings given as arguments, separated by a string.
 * @separator: String used as separator between strings.
 * @n: number of arguments
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);

		if (separator == NULL)
			separator = "";

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
