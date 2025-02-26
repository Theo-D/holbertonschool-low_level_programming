#include "main.h"

/**
 * _strlen - Loops through *s[] and counts the number of characters.
 * @s: the string to return the length of.
 *
 * Return: the length of the given string as an int.
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != 0)
	{
		c++;
	}
	return (c);
}
