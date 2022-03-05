#include "main.h"
#include <stdio.h>

/**
 *_strncpy - concatenate two arrays
 *@dest: is the destination
 *@src: is the source
 *@n: is the arameter of function
 * Return: Always dest.
 **/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

return (dest);
}

