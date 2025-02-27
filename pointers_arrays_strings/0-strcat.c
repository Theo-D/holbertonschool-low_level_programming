#include "main.h"

/**
 * _strcat - A function that concatenates two given strings.
 * @dest: The first part of the string.
 * @src: The string to append to the first string.
 *
 * Return: A string made of the two strings given as param.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
