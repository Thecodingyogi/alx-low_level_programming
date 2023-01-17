#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable type
 * @d: pointer to struct type dog
 * @name: name of dog
 * @age: name of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
