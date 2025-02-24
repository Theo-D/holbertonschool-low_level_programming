#include "main.h"

/**
*_isdigit - Checks if a given char is uppercase or not.
*@c: char to be checked
*
*Return: Return 1 if digit, return 0 else
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
