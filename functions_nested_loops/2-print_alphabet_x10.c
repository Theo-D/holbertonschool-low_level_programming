#include "main.h"

/**
 * print_alphabet_x10 - loops through letters from a to z
 * and prints each one of them. Does this 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int letter;
	int loop = 0;

	while(loop  < 10)
	{
		letter = 97; /**doit être assigné juste avant la seconde
		*boucle while sinon à la fin de la seconde boucle, n'accédant
	       	*plus à la variable 'lettre', celle-ci conservera la valeur 123
		*et la première boucle n'imprimera que '\n' 10 fois*/

		while (letter < 123)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		loop++;
	}
}

