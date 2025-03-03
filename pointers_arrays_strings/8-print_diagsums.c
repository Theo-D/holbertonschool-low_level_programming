#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - a function that prints the sum of
 *the two diagonals of a square matrix of integers.
 *@a: The array from which the diagonal must be added
 *@size: the size of the dimensions of the array.
 *
 *Return: the sums of the numbers of the diagonal in the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	int sizeArr = size * size;

	for (i = 0; i < sizeArr + 1; i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i < sizeArr - 1; i += size - 1)
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
