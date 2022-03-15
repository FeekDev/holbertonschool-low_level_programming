#include <stdio.h>
#include "dog.h"

/**
 * init_dog - this function call the parameters
 * @name: the name of dog
 * @d: this is the parameter for structure
 * @age: the age of dog
 * @owner: the owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)/* check the correct initiated*/
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
