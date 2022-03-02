#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - this function used from library
 *
 *@s: the character send with parameter
 *
 * Return: Always 0.
 **/
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

/**
 * _strchr - find a char
 * @s: is a array
 * @c: is a char wanted
 * Return: Always 0.
 **/

char *_strchr(char *s, char c)
{
int i;

for (i = 0; i < _strlen(s); i++)
{
	if (s[i] == c)
	{
	return (s + i);
	}
}
return ('\0');
}
