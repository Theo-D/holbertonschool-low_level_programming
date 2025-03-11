#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for a array, using malloc.
 *@nmemb: number of elements in the array.
 *@size: the size of the elements in the array.
 *
 *Return: Null of malloc fail or if nmemb or size == 0. Else returns
 *the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	while (arr[i])
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
