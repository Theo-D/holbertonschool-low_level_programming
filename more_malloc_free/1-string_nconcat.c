#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - Concatenates two strings.
 *@s1: first string.
 *@s2: string to concatenate.
 *@n: Number of characters to concatenate.
 *
 *Return: Null if malloc fails else, returns array containing
 *concatenated strings.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int size1 = 0, size2 = 0, nsize = n, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;

	if (nsize >= size2)
	{
		nsize = size2;
		arr = malloc((size1 + size2) + 1 * sizeof(char));
	}
	else
		arr = malloc((size1 + nsize) + 1 * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		arr[i] = s1[i];
	}
	for (j = 0; j < nsize ; j++)
	{
		arr[i] = s2[j];
		i++;
	}

	arr[i] = 0;
	return (arr);
}
