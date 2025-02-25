#include "main.h"

/**
 *swap_int - Swaps two integers given as parameters
 *@a: first integer to be swaped.
 *@b: second integer to swaped.
 *
 *Return: Swaped value of both integers given as parameters
 */

void swap_int(int *a, int *b)
{

	/**
	 *Pourquoi
	 *
	 * int ValueA = *a;
	 * *b = valueA;
	 *
	 * ne fonctionne pas, mais
	 *
	 * int ValueA;
	 * valueA = *a;
	 * *b = valueA;
	 *
	 * fonctionne?
	 */
	int valueA;
	int valueB;

	valueA = *a;
	valueB = *b;
	*b = valueA;
	*a = valueB;
}
