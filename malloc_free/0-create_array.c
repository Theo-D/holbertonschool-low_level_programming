#include <stdlib.h>
#include "main.h"

/**
 *create_array - creates an array of chars, and
 *initializes it with a specific char.
 *@size: The size of the array
 *@c: the character to populate the array.
 *
 *Return: if size == 0 or if function fails, return NULL,
 *else returns pointer to the array created.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = (char *)malloc(size * sizeof(c));
	unsigned int i = 0;

	if (arr == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
