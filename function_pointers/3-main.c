#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Calls get_op_func to perform an arithmetic operation.
 * @argc: Arg count.
 * @argv: array of string args.
 *
 * Return: 0 if everything is fine. 98, 99, or 100 if fails.
 */

int main(int argc, char **argv)
{
	int a, b;
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (argv[2] == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
