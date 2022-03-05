#include "main.h"
#include <stdio.h>

/**
 *_strcmp - compares two strings
 *@s1: is the destination
 *@s2: is the source
 * Return: Always dest.
 **/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

	s1++;
	s2++;
	}
	return (0);

}

