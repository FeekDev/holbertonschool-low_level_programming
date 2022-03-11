#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - this array of integer from min to max
 * @min: parameter send the min
 * @max:  parameter send the max
 * Return: the new array
 **/

int *array_range(int min, int max)
{
	int i, n;
	int *ptr;

	n = (max - min + 1);

	if (min > max)/* Conditional between min and max*/
		return (NULL);

	ptr = malloc(n * (sizeof(int)));/* allocated the memory dynamic*/

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		*(ptr + i) = min++;

	return (ptr);

}
