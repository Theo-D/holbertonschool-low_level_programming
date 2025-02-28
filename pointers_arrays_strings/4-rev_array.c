#include "main.h"

/**
 *
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
