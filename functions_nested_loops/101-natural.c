#include <stdio.h>
#include <stdlib.h>
/**
 *times_table - Prints every 9 times table
 *
 * Return: the result of every multiplication
 * from every times table from 0 to 9
 */
void add_naturals(void)
{
	int num;
	int toAdd = 0;

	for (num = 1023; num >= 0 ; num--)
	{
		if (num % 3 == 0 || num % 5 == 0 )
		{
			toAdd += num;
		}

	}
	printf("%d \n", toAdd);
}

int main(void)
{
	add_naturals();
	return (0);
}
