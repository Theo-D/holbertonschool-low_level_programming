#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: The difference between the two given strings.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int total;

	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
		i++;
	if (s1[i] != s2[i])
		total = s1[i] - s2[i];
	else
		total = 0;
	return (total);
}
