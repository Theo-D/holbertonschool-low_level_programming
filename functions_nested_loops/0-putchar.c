#include "main.h"

/**
 * main - loops through string[] to print every letters in the array
 *
 * Return: Always 0.
 */
int main(void)
{
	int letter = 0 ;
	char string[9] = "_putchar\n";
	while (letter < 9)
	{
		_putchar(string[letter]);
		letter++;
	}
	return (0);
}

