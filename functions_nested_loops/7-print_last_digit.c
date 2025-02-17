#include "main.h"

/**
 *print_last_digit - Displays the last digit of given number
 * @n: int of which the last digit will be displayed
 *
 * Return: Last digit of the int used as parameter
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
		return (mod);
	}
}
