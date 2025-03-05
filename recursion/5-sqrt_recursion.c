#include "main.h"

/**
 *searchSqrt - Searches if a number multiplied by itself is
 *equal to the given number.
 *@i: The number to multiply by itself.
 *@n: The number to find the square root of.
 *
 *Return: i if multiplied by itself is equal to n, else, return -1
 */

int searchSqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (searchSqrt(i + 1, n));
}

/**
 *_sqrt_recursion - Uses the above function to find the square root of n
 *@n: The number for which the greater square root should be found.
 *
 *Return: i if multiplied by itself is equal to n, else, return -1
 */

int _sqrt_recursion(int n)
{
	return (searchSqrt(1, n));
}
