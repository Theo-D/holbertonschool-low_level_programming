#include "main.h"

/**
 *print_diagonal - prints a given number of diagonal lines.
 *@n: The number of lines to be printed
 *
 *Return: The number of lines to be printed
 */

void print_triangle(int size)
{
	int i, j;
	int k = size -1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < k)
					_putchar(32);
				else
					_putchar(35);
			}
			k--;
			_putchar('\n');
		}
	}
}
