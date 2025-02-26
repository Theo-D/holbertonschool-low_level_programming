#include "main.h"

/**
 * _puts - Loops through str[] and print every character in it.
 * @str: The string to be printed to stdout.
 *
 * Return - The string given as param.
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
