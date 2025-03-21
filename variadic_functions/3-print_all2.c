#include "variadic_functions.h"
#include <stdio.h>
/**
 * printChar - Prints character from list.
 * @args: The list from which printing the character.
 *
 * Return: Nothing.
 */
void printChar(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * printInt - Prints integer from list.
 * @args: The list from which printing the integer.
 *
 * Return: Nothing.
 */
void printInt(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * printFloat - Prints float from list.
 * @args: The list from which printing the float.
 *
 * Return: Nothing.
 */
void printFloat(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * printString - Prints character from string.
 * @args: The list from which printing the string.
 *
 * Return: Nothing.
 */
void printString(va_list args)
{
	char *string = va_arg(args, char*);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
/**
 * print_all - prints an arguments according to a format specifier.
 * @format: string of format specifier for printing the argument.
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";
        formSpec_t fS[] = {
                {'c', printChar},
                {'i', printInt},
                {'f', printFloat},
                {'s', printString},
                {'\0', NULL}
	};

	va_start(args, format);
	while (format[i]  && format)
	{
		j = 0;
		while (fS[j].f)
		{
			if (format[i] == fS[j].f)
			{
				fS[j]._print(args);
				sep = ", ";
				printf("%s", sep);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
