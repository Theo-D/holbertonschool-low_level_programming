#include "main.h"
#include <stdlib.h>

/**
 *str_concat - a function that concatenates two strings.
 *@s1: First string to concatenate.
 *@s2: Second string to concatenate.
 *
 *Return: Null on failure or and array containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int sizeS1 = 0, sizeS2 = 0;
	unsigned int i, j;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[sizeS1])
	{
		sizeS1++;
	}

	while (s2[sizeS2])
	{
		sizeS2++;
	}

	arr = malloc((sizeS1 + sizeS2) + 1 * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < sizeS1; i++)
	{
		arr[i] = s1[i];
	}

	for (j = sizeS1; j < (sizeS1 + sizeS2); j++)
	{
		arr[j] = *s2;
		s2++;
	}
	arr[j] = 0;

	return (arr);
}
