#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
*/
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
*/
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *copy_of_name;
	char *copy_of_owner;

	doggy = malloc(sizeof(dog_t));

	if (doggy == NULL)
		return (NULL);

	doggy->age = age;

	if (name != NULL)
	{
		copy_of_name = malloc(_strlen(name) + 1);
		if (copy_of_name == NULL)
		{
			free(doggy);
			return (NULL);
		}
		doggy->name = _strcopy(copy_of_name, name);
	}
	else
		doggy->name = NULL;

	if (owner != NULL)
	{
		copy_of_owner = malloc(_strlen(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(copy_of_name);
			free(doggy);
			return (NULL);
		}
		doggy->owner = _strcopy(copy_of_owner, owner);
	}
	else
		doggy->owner = NULL;

	return (doggy);
}
