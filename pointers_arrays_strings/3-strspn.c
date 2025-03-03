#include "main.h"

/**
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)
			{
				pos++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (pos);
		}
		s++;
	}
	return (pos);
}
