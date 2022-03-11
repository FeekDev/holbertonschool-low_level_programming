#include "main.h"
#include <stdlib.h>

/**
 * _strlen - this function used from library
 *
 *@s: the character send with parameter
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		++len;
		++s;
	}
	return (len);
}

/**
 * string_nconcat - this function concatenates two function
 * @s1: this is the destiny
 * @s2: this is the source
 * @n: this is a num of array
 * Return: the array
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i = 0, j = 0, len = 0, s = 0;

	s = n;
	
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (s >= _strlen(s2))
		s = _strlen(s2);

	len = _strlen(s1) + s + 1;

	concat = malloc(len * (sizeof(char)));

	if (concat == NULL)
	return (NULL);

	i = 0;
	j = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < s; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	
	return (concat);
}
