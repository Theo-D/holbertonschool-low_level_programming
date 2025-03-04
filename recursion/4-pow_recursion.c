#include "main.h"

/**
 *_pow_recursion - a function that returns the value of x
 *raised to the power of y.
 *@x: The number to be raised to the power of y.
 *@y: The power to which raise x.
 *
 *Return: -1 if y < 0, x to the power of y if y!= 0, otherise, returns 1.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
