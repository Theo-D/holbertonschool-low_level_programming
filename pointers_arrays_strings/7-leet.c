#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: String to be encoded into 1337.
 *
 * Return: A string partialy translated to 1337 speak.
 */

char *leet(char *s)
{
	char arrAlpha[6] = {'a', 'e', 'o', 't', 'l'};
	char arrLeet[6] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j;

	while (s[i])
	{
		for (j = 0; arrAlpha[j]; j++)
		{
			if (s[i] == arrAlpha[j] || s[i] == arrAlpha[j] - 32)
			{
				s[i] = arrLeet[j];
			}
		}
		i++;
	}
	return (s);
}
