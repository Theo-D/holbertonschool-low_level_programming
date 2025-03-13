#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Return length of a given string.
 * @s: the given string.
 *
 * Return: an int reprsenting the length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;
	return (i);
}

/**
 * _strcpy - Copies a string to another.
 * @s1: destination string.
 * @s2: source string.
 *
 * Return: The copied string.
 */

char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i] != 0; i++)
	{
		s1[i] = s2[i];
	}
	s1[i] = 0;
	return (s1);
}

/**
 * new_dog - Creates a new object dog.
 * @name: The name of the new dog.
 * @age: the age of the new dog.
 * @owner: the owner of the new dog.
 *
 * Return: The new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->name = malloc(_strlen(name) + 1 * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(_strlen(owner) + 1 * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
