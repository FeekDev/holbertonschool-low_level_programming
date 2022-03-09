#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - the function concatena two string in using malloc
 * @s1: the parameter string destiny
 * @s2: the parameter string source
 * Return: Return the concat
 **/

char *str_concat(char *s1, char *s2)
{
	int d = 0, s = 0;
	int i = 0, f = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + d))/* Calculate size of array*/
		i++, d++;

	while (*(s2 + s))
		f++, s++;
	s++;/*Add the null at the finish of the array*/

	concat = malloc((d + s) * sizeof(char));

	if (concat == NULL)
	{
	return (NULL);
	}

f = 0;
i = 0;

	while (i < d)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	while (f < s)
	{
		*(concat + i) = *(s2 + f);
		i++, f++;
	}

	return (concat);
}
