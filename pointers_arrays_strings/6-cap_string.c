#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: the string to be capitalized.
 *
 * Return: The given string, capitalized.
 */

char *cap_string(char *s)
{
	int i = 0;
	int j;
	char sep[14] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, '{', '}'};

	while (s[i])
	{
		for (j = 0; sep[j]; j++)
		{
			if (s[i] == sep[j] && (s[i + 1] >= 97 && s[i + 1] <= 122))
			{
				s[i + 1] -= 32;
			}
			if (s[0] >= 97 && s[0] <= 122)
			{
				s[0] -= 32;
			}
		}
		i++;
	}
	return (s);
}
