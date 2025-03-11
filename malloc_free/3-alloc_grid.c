#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: the number of columns in the array
 *@height: the number of rows in the array
 *
 *Return: the 2 dimensionnal array, else if width and/or height are <= 0
 *return NULL.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(arr[i]);

			}
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
