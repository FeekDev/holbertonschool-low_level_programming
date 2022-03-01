#include "main.h"

/**
 * _memset - returns a pointer
 * @n : parameter determined n
 * @b: parameter source
 * @s: parameter to pointer
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i = 0;

while (i < n)
{
	s[i] = b;
	i++;
}

return (s);
}
