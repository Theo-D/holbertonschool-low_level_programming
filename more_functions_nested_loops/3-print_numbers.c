#include "main.h"

/**
 *print_numbers - Prints every number from 0 to 9
 *
 *Return: every number from 0 to 9 followed by a newline
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
