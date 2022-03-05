#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - this function used from library
 *
 *@s: the character send with parameter
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		++len;
		++s;
	}
	return (len);
}
