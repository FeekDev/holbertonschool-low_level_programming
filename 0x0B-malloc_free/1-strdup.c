#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string
 * _strlen - the function is similar to srlen
 *@str: the string
 *Return: this save the string
 **/

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *arr;
	char *origin = str;

	if (str == NULL)/*compare the array source*/
	{
		return (NULL);
	}

	while (*(str + i))
		len++, i++;
	len++; /* add null terminator to length */

	str = origin;

	arr = malloc(len * sizeof(char));/*Dinamic memory and copy */

	i = 0;
	while (i < len)/*pointers */
	{
		*(arr + i) = *(str + i);
		i++;
	}

	return (arr);
}
