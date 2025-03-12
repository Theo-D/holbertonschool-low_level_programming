#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: struct to be printed.
 *
 * Description: Prints Name, Age and Owner from struct dog,
 * each followed by a newline.
 */

void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", nil);
		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", nil);
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", nil);
	}
}
