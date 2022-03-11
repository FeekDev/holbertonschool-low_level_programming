#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - this function allocate memory in array with pointer
 * @nmemb: this parameter desginded the type of elments
 * @size: this parametrs determined the number of elements
 * Return: return void
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)/* conditions in both */
		return (NULL);

			ptr = malloc(nmemb * size);/* allocate memory */

			if (ptr == NULL) /*check the memory*/
				return (NULL);

			for (i = 0; i < nmemb * size; i++)/* asgined the memory */
				*((char *)ptr + i) = 0;

			return (ptr);

}
