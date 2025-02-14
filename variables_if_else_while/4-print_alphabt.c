#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - cycles through letter from a to z
*
* Return: prints each letter a the alphabet
* except e and q.
*/
int main(void)
{
	int asciiLetter;

	for (asciiLetter = 97 ; asciiLetter < 123 ; asciiLetter++)
	{
		if (asciiLetter != 101 && asciiLetter != 113)
		{	
			putchar(asciiLetter);
		}
	}
	putchar('\n');
	return (0);
}
