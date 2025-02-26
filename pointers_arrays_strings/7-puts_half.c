#include "main.h"

/**
 * puts_half - Prints the half of a string, rounded up.
 * @str: The string to be partialy printed.
 *
 * Return - The half of given string.
 */
void puts_half(char *str)
{
	int strlen = 0;
	int halfLen;

	while (str[strlen] != 0)
		strlen++;

	if (strlen % 2 != 0)
		strlen += 1;

	halfLen = strlen / 2;
	while (str[halfLen])
	{
		_putchar(str[halfLen]);
		halfLen++;
	}
	_putchar('\n');
}
