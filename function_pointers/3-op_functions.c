#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Adds two numbers.
 * @a: first number to be added.
 * @b: second number to be added.
 *
 * Return: Result of the addition.
 */
int op_add(int a, int b)
{
	int add = a + b;

	return (add);
}

/**
 * op_sub - Subtract two numbers.
 * @a: first number to be subtracted.
 * @b: second number to be subtracted.
 *
 * Return: Result of the subtraction.
 */
int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}

/**
 * op_mul - Multiplies two numbers.
 * @a: First number to be multiplied.
 * @b: Second number to be multiplied.
 *
 * Return: The result of the multiplication.
 */
int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/**
 * op_div - Divides two numbers.
 * @a: First number to be divided.
 * @b: Second number to be divided.
 *
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
 * op_mod - Return remainder of a division.
 * @a: First number to be divided.
 * @b: Second number to be divided.
 *
 * Return: The remainder of the division.
 */
int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
