#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: The string to be copied.
 * @src: The string to be copied to.
 * @n: The limit of bytes to be printed from src.
 *
 * Return: A string made of the two strings given as param.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
