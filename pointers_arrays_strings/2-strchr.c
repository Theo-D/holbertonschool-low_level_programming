#include "main.h"

/**
*_strchr - Locates a character in a string
*@s: the string to look into.
*@c: the character to find in the string.
*
*Return: Returns a pointer to the first occurrence of the character
*c in the string s, or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != 0)
	{
		i++;
	}
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
