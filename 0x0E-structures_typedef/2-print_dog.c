#include <stdio.h>
#include "dog.h"

/**
 * print_dog - this function determined what printing
 * Return: void
 * @d: the struct sending the main
 **/

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");

	printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");

	printf("Owner: %s\n", d->owner);

	if (d == NULL)
		return;
}
