#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - cycles through letter from z to a
*
* Return: each letter a the alphabet
*/
int main(void)
{
	int asciiLetter;

	for (asciiLetter = 122 ; asciiLetter > 96 ; asciiLetter--)
	{
		putchar(asciiLetter);
	}
	putchar('\n');
	return (0);
}
