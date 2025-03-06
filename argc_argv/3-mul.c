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

int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
}
