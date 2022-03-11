#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - this function that allocates memory using malloc
 * @b: send the adress integer
 * Return: the array
 **/

void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = (int *)malloc(b);/* the pointer*/

	if (arr == NULL)/*check the memory*/
	{
		exit(98);
	}

	return (arr);
}

