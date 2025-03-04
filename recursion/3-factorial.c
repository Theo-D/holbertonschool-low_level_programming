#include "main.h"

/**
 *factorial - Prints the factorials of a given number.
 *@n: The number from which the factorials should be printed.
 *
 *Return: -1 of n < 0, 1 if n = 0 or 1. Otherwise, return the
 *factorial of the given number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
