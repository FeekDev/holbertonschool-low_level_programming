#include "main.h"
#include <stdio.h>

/**
 * factorial - that returns the factorial of a given number
 * @n: this function send the int
 * Return: the factorial
 **/

int factorial(int n)
{
if (n < 0)
{
	return (-1);
}

else if (n < 1)
{
	return (1);
}

return (n * factorial(n - 1));

}
