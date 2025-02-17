#include "main.h"

/**
 * print_alphabet - loops through letters from a to z and prints each one of them
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int letter = 97;

	while (letter < 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar(10);
}

