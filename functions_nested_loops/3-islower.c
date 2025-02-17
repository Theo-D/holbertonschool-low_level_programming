#include "main.h"

/**
 * _islower - Tests if a character is lowercase or not
 * @c: int representing an ascii character
 *
 * Return: 1 if lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

