#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - the function print reverse a string
 *@s: the parameter
 *
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;
	/* this block war the string */
	while (*s != '\0')
	{
		len++;
		++s;
	}

	s--;

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
			s--;
	}
	_putchar('\n');
}
