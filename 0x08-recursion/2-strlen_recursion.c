#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - this functionj count the lenght
 * @s: te parameter send string
 * Return: lenght
 **/

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return ('\0');
}
return (1 + _strlen_recursion(s + 1));
}
