#include "main.h"
#include <stdio.h>

/**
 * swap_int - this function swap the stock of two pointers int
 *@a: the variables send with parammeter.
 *@b: the variable sen with parameter.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
