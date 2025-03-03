#include "main.h"

/**
 *_memcpy - a function that copies memory area.
 *@dest: string to be copied to.
 *@src: string to copy.
 *@n: number of characters to copy.
 *
 *Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
