#include <stdio.h>
/**
 *add_naturals - prints the sum of every natural number below
 *1024 (excluded) that are multiples of 5 or 3
 *
 * Return: The sum of every numbers
 */
void add_naturals(void)
{
	int num;
	int toAdd = 0;

	for (num = 1023; num >= 0 ; num--)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			toAdd += num;
		}

	}
	printf("%d\n", toAdd);
}

/**
 *main - Calls add_naturals()
 *
 * Return: 0
 */
int main(void)
{
	add_naturals();
	return (0);
}
