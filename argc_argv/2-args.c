#include "main.h"
#include <stdio.h>

/**
 *main - Entry point for args
 *@argc: NUmbers of args passed to args
 *@argv: args passed to args
 *
 *Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
