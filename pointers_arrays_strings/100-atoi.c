#include "main.h"

/**
 *_atoi - Converts a string into an int
 *@s: The string to be converted into int
 *
 *Return: An int
 */

int _atoi(char *s)
{
	int total = 0;
	int sign = 1;
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= 48 && s[i] <= 57)
		{
			total = total * 10 + (s[i] - 48);
		}
		i++;
	}
	return (total * sign);
}
