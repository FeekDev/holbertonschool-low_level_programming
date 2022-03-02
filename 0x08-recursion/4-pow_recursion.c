#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - that returns the factorial of a given number
 * @x: this function send the int
 * @y: this function send the int
 * Return: the factorial
 **/

int _pow_recursion(int x, int y)
{
if (y == 0)
{
	return (1);
}

else if (y < 0)
{
	return (-1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
