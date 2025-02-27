#include "main.h"

/**
 * _strcat - A function that concatenates two given strings.
 * @dest: The first part of the string.
 * @src: The string to append to the first string.
 *
 * Return: A string made of the two strings given as param.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int lenSrc = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[lenSrc])
	{
		lenSrc++;
	}
	if (n > lenSrc)
	{
		n = lenSrc;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (lenSrc < n)
	{
		dest[i] = 0;
	}
	return (dest);
}
