#include "main.h"
#include <stdio.h>

/**
 *_strspn - gets the length of a prefix substring
 *@s: the array main
 *@accept: the value comparator
 * Return: the value of count
 **/

unsigned int _strspn(char *s, char *accept)
{

int conteo = 0;
int a = 0;
int b = 0;

while (s[a] != '\0')
{
while (accept[b] != '\0')
{
if (accept[b] == s[a])
conteo++;
b++;
}
b = 0;
a++;
if (s[a] == 32)
{
break;
}
}
return (conteo);
}
