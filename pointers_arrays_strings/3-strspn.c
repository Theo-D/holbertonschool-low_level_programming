#include "main.h"

/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: The string to look for the substring.
 *@accept: the string to compare to the substring.
 *
 *Return: Returns the number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				pos++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (pos);
		}
		s++;
	}
	return (pos);
}
