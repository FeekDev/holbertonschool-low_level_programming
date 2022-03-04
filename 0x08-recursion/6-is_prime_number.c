#include "main.h"
#include <stdio.h>

/**
 * selector - find square root of n.
 * @n: n
 * @number: variable for allowed
 * Return: 1 is prime number, or 0 is'nt prime number
 */

int selector(int n, int number)
{
	if (n % 2 == 0 || n % 5 == 0)
		return (0);

	return (1);
	return (selector(n, number + 1));
}

/**
 *  is_prime_number -  determined if he number is prime
 * @n: n
 * Return: 1 is prime number, or 0 is'nt prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (selector(n, 0));
}
