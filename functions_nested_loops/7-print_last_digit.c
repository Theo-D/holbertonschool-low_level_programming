#include "main.h"
#include "6-abs.c" /**Déso pas déso */

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
		if (n == -2147483648)
		{
			int abs = _abs(n + 1);

			mod = abs % 10;
			mod += 1;
			_putchar(mod + '0');
			return (mod);
		}
		else
		{
			int abs = _abs(n);

			mod = abs % 10;
			_putchar(mod + '0');
			return (mod);
		}
	}
}
