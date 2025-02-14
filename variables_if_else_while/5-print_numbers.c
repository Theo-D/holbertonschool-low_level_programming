#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - cycles through letter from a to z
*
* Return: each letter a the alphabet
*/
int main(void)
{
	int base10Num;

	for (base10Num = 0 ; base10Num < 10 ; base10Num++)
	{
		printf("%d",base10Num);
	}
	putchar('\n');
	return (0);
}
