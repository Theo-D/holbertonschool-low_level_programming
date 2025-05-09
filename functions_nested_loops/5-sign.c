#include "main.h"

/**
 * print_sign - Tests if a number is positive, negative
 * or equal to zero
 * @n: int representing an ascii character
 *
 * Return: 1 if positive, 0 if equal to zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

