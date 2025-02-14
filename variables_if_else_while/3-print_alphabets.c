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
	int asciiLetter;

	for (asciiLetter = 97 ; asciiLetter < 123 ; asciiLetter++)
	{
		putchar(asciiLetter);
	}
	for (asciiLetter = 65 ; asciiLetter < 91 ; asciiLetter++)
	{
		putchar(asciiLetter);
	}
	putchar('\n');
	return (0);
}
