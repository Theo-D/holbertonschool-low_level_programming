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

	if (str == NULL)
		return (NULL);

	while(str[i])
	{
		size++;
		i++;
	}

	newStr = (char *)malloc(size * sizeof(char));

	if (str != NULL)
	{
		while (j < size)
		{
			newStr[j] = str[j];
			j++;
		}
		return (newStr);
	}
	else
		return (NULL);
}
