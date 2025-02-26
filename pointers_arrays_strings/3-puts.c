#include "main.h"

/**
 * _puts - Loops through str[] and print every character in it.
 * @str: The string to be printed to stdout.
 *
 * Return - The string given as param.
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != 0)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
