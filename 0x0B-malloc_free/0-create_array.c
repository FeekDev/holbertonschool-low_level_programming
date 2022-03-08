#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - this function crate an array of char
 * @size: th size of array
 * @c: the parameters of char
 * Return: array
 **/

char *create_array(unsigned int size, char c)
{
int i = 0;

	char *arr = (char *)malloc(size * sizeof(char)); /* dinamic memory */

	if (size == 0) /* size of array */
	{
		return (NULL);
	}

	if (arr == NULL) /* in the end of array */
	{
		return (NULL);
	}

	while (i < (int)size) /* put the poninter in the array */
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';
	return (arr);
}
