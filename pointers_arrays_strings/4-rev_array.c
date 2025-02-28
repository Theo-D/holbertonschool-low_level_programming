#include "main.h"

/**
 * reverse_array - A function that reverses an array of integers.
 * @a: the array to reverse.
 * @n: the size of the array to be reversed
 *
 * Return : reversed array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tab;

	n -= 1;
	while (i < n)
	{
		tab = a[i];
		a[i] = a[n];
		a[n] = tab;
		i++;
		n--;
	}
}
