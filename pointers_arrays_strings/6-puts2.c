#include "main.h"

/**
 * puts2 - Loops through str[] and print every other character in it.
 * @str: The string to be partialy printed
 *
 * Return - 1 out of every 2 characters from str[] starting from str[0].
 */
void puts2(char *str)
{
	int c = 0;
	int i = 0;
	
	while (str[i] != 0)
	{
		i++;
	}
	i -= 1;
	while (c <= i)
	{
		_putchar(str[c]);
		c += 2;
	}
	_putchar('\n');
}
