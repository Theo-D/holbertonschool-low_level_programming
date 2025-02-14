#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

/**
*main - Checks the last digit of a random number
*
* Return: the last number of n if it is greater than 5,
* greater than 6 and not 0
* or equal to zero
*/
int main(void)
{
	int n;
	int nombre;
	int mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nombre = abs(n);
	mod = nombre % 10;

	if(mod > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, mod);
	}
	else if(mod == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod);
	}
	return (0);
}
