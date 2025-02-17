#include "main.h"

/**
 * main - loops through string[] to print every letters in the array
 *
 * Return: Always 0.
 */
int main(void)
{
	int letter = 0 ;
	char string[10] = "_putchar\n";
	while (letter < 10)
	{
		_putchar(string[letter]);
		letter++;
	}
	return (0);
}

