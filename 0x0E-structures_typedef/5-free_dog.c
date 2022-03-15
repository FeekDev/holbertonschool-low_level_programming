#include <stdio.h>
#include "dog.h"

/**
 * free_dog - this function freedom the poppys
 * @d: the parameter
 * Return: this return void
 **/
void free_dog(dog_t *d)
{
	if (d == null)
		return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);

}
