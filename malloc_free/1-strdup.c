#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: the string to be copied.
 *
 * Return: Null if malloc fails or if str is empty. Otherwise, returns
 * pointer to new string.
 */

char *_strdup(char *str)
{
	unsigned int size = 0;
	unsigned int j = 0;
	unsigned int i = 0;
	char *newStr;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		size++;
		i++;
	}

	newStr = malloc((size + 1) * sizeof(char));
	if (newStr == NULL)
		return (NULL);

	while (str[j])
	{
		newStr[j] = str[j];
		j++;
	}
	newStr[j] = 0;

	return (newStr);
}
