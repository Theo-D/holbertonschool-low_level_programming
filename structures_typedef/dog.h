#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure describing a dog.
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 *
 * Description: A structure representing a dog containing members
 * describing his name, age and owner.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
