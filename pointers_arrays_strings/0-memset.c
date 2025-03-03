#include "main.h"

/**
 *_memset - A function that fills memory with a constant byte.
 *@s: Memory to be written to.
 *@b: the char or str to be writen.
 *@n: the nulber of characters to write.
 *
 * Return: Returns a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n != 0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
