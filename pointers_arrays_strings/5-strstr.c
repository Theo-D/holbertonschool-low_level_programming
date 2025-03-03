#include "main.h"

/**
 *_strstr - A function that locates a substring.
 *@haystack: the string in which to look for the substring
 *@needle: The substring to be looked for
 *
 *Return: a pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (needle[i] != 0)
	{
		i++;
	}

	while (*haystack)
	{
		while (needle[j])
		{
			if (haystack[j] != needle[j])
				break;
			j++;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
