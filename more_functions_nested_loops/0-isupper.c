#include "main.h"

/**
*_isupper - Checks if a given char is uppercase or not.
*@c: char to be checked
*
*Return: Return 1 if upper, return 0 else
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
