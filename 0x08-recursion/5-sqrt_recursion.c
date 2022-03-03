#include "main.h"
#include <stdio.h>

/**
 * selector - find square root of n.
 * @n: n
 * @root: variable for allowed
 * Return: natural square root, or -1 if not natural root
 */

int selector(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (selector(n, root + 1));
}

/**
 * _sqrt_recursion -  that returns the natural square root of a number
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (selector(n, 0));
}
