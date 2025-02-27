#include "main.h"

/**
 * _strncat - A function that concatenates two given strings.
 * @dest: The first part of the string.
 * @src: The string to append to the first string.
 * @n: The limit of bytes to be printed from src
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
	if (i < n)
		dest[i] = 0;
	return (dest);
}
