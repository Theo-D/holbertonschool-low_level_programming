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

	newStr = malloc((size + 1) * sizeof(char));

	while (j < size + 1)
	{
		newStr[j] = str[j];
		j++;
	}
	newStr[j] = 0;
	if (!newStr)
		return (NULL);

	return (newStr);
}
