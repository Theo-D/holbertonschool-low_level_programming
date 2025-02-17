#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int letter = 0 ;
	char string[9] = "_putchar";
	while (letter < 9)
	{
		_putchar(string[letter]);
		letter++;
	}	
	return (0);
}
