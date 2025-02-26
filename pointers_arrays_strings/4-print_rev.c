#include "main.h"

/**
 * print_rev - Prints a given string in reverse.
 * @s: The string to be reversed.
 *
 * Return - The given string reversed.
 */
void print_rev(char *s)
{
	int strlen = 0;

	while (s[strlen] != 0)
	{
		strlen++;
	}
	strlen -= 1;
	while (strlen >= 0)
	{
		_putchar(s[strlen]);
		strlen--;
	}
	_putchar('\n');
}
