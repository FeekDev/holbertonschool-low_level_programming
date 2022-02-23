#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}


/**
 *puts_half - the function prints half of a string.
 *@str: the parameter
 *
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i;

	if (len % 1 != 0)
	{
	i = (len / 2) + 1;
	}
	else
	{
	i = (len / 2);

	}
	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
