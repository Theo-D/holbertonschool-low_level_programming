#include "main.h"

/**
 *print_line - prints a given number of lines.
 *@n: The number of lines to be printed
 *
 *Return: The number of lines to be printed
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
