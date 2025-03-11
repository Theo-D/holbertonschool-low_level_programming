#include "main.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers.
 *@min: start value of the array.
 *@max: end value of the array.
 *
 *Return: Null if min > max or if malloc fails. Else, return array.
 */

int *array_range(int min, int max)
{
	int *arr;
	int diff = max - min;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc((diff + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
