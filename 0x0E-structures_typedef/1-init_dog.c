#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable type
 * @d: pointer to struct type dog
 * @name: name of dog
 * @age: name of dog
 * @owner: owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
