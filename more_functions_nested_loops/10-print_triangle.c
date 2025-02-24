#include "main.h"

/**
 *print_triangle - prints a triangle of a given numer 'size'.
 *@size: the size out of which building the triangle
 *
 *Return: A triangle made of "#".
 */

void print_triangle(int size)
{
	int i, j;
	int k = size - 1;

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
