#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Allocates memory using malloc().
 *@b: the number of bytes to be allocated.
 *
 *Return: Returns a pointer to the allocated memory or 98 in case of normal
 *process termination.
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
