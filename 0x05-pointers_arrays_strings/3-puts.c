#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - this function print with puts but don't move the cursor to next line
 *@str: the parameter
 *
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
