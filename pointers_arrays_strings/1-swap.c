#include "main.h"

/**
 *
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
