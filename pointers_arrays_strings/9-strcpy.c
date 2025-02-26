#include "main.h"

/**
 * _strcpy - Copies a string from a src to a dest.
 * @dest: destination of the string to be copied.
 * @src: source of the string to be copied.
 *
 * Return: The destination string with de copied content from src
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i + 1] = src[i + 1];
	return (dest);
}
