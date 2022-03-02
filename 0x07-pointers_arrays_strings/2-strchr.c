#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - find a char
 * @s: is a array
 * @c: is a char wanted
 * Return: null.
 **/

char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
	i++;
	if (s[i] == c)
	{
	return (s + i);
	}
}
return ('\0');
}
