#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes structure dog
 * @d: the name of the structure to be initialized.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: Dog's owner.
 *
 * Description: initializes a struct of type dog with given params being
 * name, age and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		printf("Ok");

	d->name = name;
	d->age = age;
	d->owner = owner;
}
