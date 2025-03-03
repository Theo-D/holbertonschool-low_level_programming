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
	while (*haystack)
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == 0)
			return (haystack);
		haystack++;
	}
	return (0);
}
