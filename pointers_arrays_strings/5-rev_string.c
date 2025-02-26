#include "main.h"

/**
 * rev_string - Reverses a given string.
 * @s: The string to be reversed.
 *
 * Return - The reversed string.
 */
void rev_string(char *s)
{
	int strlen = 0;
	int i = 0;
	char str;

	while (s[strlen] != 0)
	{
		strlen++;
	}
	strlen -= 1;
	while (i < strlen)
	{
		str = s[i];
		s[i] = s[strlen];
		s[strlen] = str;
		i++;
		strlen--;
	}
}
