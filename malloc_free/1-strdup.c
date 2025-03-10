#include "main.h"
#include <stdlib.h>

/**
 *
 */

char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int j = 0;
	unsigned int i = 0;
	char *newStr;

	if (str != NULL)
	{
		while(str[i])
		{
			size++;
			i++;
		}

		newStr = malloc((size + 1) * sizeof(char));
	}
	else
		return (NULL);

	if (str != NULL)
	{
		while (j < size)
		{
			newStr[j] = str[j];
			j++;
		}
		newStr[j] = 0;
		return (newStr);
	}
	else
		return (NULL);
}
