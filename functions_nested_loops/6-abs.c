#include "main.h"

/**
 *_abs - Computes the absolute value of an integer
 * @n: int to be put to abs
 *
 * Return: An integer to its absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}

