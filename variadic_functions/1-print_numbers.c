#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers given as arguments, separated by a string.
 * @separator: String used as separator between numbers.
 * @n: number of arguments
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			separator = "";
		if (i != n - 1)
		{
			printf("%d", va_arg(args, int));
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
