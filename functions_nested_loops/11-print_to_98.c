#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints every natural numbers from given number to 98
 *@n: The natural number from which to start the count to 98 

 * Return: Every natural number from n to 98
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
