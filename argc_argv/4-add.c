#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point for args
 *@argc: NUmbers of args passed to args
 *@argv: args passed to args
 *
 *Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, j;
	int num = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
			{
				num += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", num);
	return (0);
}
