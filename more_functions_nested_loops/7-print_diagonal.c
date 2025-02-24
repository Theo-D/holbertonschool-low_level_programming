#include "main.h"

/**
 *print_diagonal - prints a given number of diagonal lines.
 *@n: The number of lines to be printed
 *
 *Return: The number of lines to be printed
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
}
