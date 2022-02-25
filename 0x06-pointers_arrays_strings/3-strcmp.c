#include "main.h"
#include <stdio.h>

/**
 *_strncpy - concatenate two arrays
 *@dest: is the destination
 *@src: is the source
 *@n: is the arameter of function
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

