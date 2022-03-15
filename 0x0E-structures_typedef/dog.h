#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 *my_dog - typedef for struct dog
 **/

typedef struct dog my_dog;

/**
 * struct dog - this is the function
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *
 *function that initialize a variable
 *
 **/

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
