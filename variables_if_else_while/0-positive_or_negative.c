#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Checks if n is positive, negative or equal to zero
 *
 * Return: the value of n followed by a statement on it being lesser, equal or greater than 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
