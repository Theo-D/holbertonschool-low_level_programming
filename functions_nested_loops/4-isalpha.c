#include "main.h"

/**
 * _isalpha - Tests if a character is alphabetical or not
 * @c: int representing an ascii character
 *
 * Return: 1 if lowercase, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

