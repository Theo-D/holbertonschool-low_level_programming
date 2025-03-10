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

	while(str[i])
	{
		size++;
		i++;
	}

	newStr = (char *)malloc(size * sizeof(char));

	while (j < size)
	{
		newStr[j] = str[j];
		j++;
	}

	if (str == NULL)
		return (NULL);
	if (newStr == NULL)
		return (NULL);
	return (newStr);
}
