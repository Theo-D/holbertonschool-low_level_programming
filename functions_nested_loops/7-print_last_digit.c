#include "main.h"

/**
 *_abs - Computes the absolute value of an integer
 * @n: int to be put to abs
 *
 * Return: An integer to its absolute value
 */

int print_last_digit(int n)
{
	int mod;

	if (n >= 0)
	{
		mod = n % 10;
                _putchar(mod + 48);
		return (mod);	
	}
	else
	{
		n *= -1;
		mod = n % 10;
		_putchar(mod + 48);
		return(mod);
	}
}
