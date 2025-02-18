#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - Prints every 9 times table
 *
 * Return: the result of every multiplication
 * from every times table from 0 to 9
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
	printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
	printf("\n");
	}
}
