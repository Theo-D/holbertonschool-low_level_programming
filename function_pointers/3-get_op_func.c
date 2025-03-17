#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Determines which function of ops[] to use
 * @s: the operand to determine which function to use.
 *
 * Return: the function to use or null if no operand corresponds
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i = 0;

	while (i < 5)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
