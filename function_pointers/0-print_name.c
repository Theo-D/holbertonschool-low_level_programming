#include "function_pointers.h"

/**
 * print_name - Prints name.
 * @name: the name to be printed.
 * @f: function to print given name formatted.
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
