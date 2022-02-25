#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two arrays
 *@dest: is the destination
 *@src: is the source
 * Return: Always dest.
 **/
char *_strcat(char *dest, char *src)
{
int d = 0;
int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}

	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;

	}
	dest[d] = '\0';

	return (dest);
}

