#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - cycles through every base16 digits
*
* Return: Every base16 digits
*/
int main(void)
{
	int asciiLetter;

	for (asciiLetter = 48 ; asciiLetter < 58 ; asciiLetter++)
	{
		putchar(asciiLetter);
	}
	for (asciiLetter = 97 ; asciiLetter < 103 ; asciiLetter++)
	{
		putchar(asciiLetter);
	}
	putchar('\n');
	return (0);
}
