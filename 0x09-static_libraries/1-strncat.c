#include "main.h"
#include <stdio.h>

/**
 *_strncat - concatenate two arrays
 *@dest: is the destination
 *@src: is the source
 *@n: is the arameter of function
 * Return: Always dest.
 **/
char *_strncat(char *dest, char *src, int n)
{
int d = 0;
int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}

	while (src[s] != src[n])
	{
		dest[d] = src[s];
		d++;
		s++;

	}
	dest[d] = '\0';

	return (dest);
}

