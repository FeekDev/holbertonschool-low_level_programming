#include "main.h"

/**
 * _puts_recursion - this function print the string.
 * that prints a string
 *@s: this is the parameter send the function
 *Return: value 0
 **/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
