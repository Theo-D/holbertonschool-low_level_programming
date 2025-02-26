#include "main.h"

/**
 * rev_string - Reverses a given string.
 * @s: The string to be reversed.
 *
 * Return - The reversed string.
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
