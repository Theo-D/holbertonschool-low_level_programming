#include "main.h"

/**
 *_strlen_recursion - A function that returns the length of a string
 *@s: the string to be returned the length of.
 *
 *Return: The length of the given string.
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
