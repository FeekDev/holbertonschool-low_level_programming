#include "main.h"
#include <stdio.h>

/**
 * _memcpy - the source copy the array in a dest n byts.
 * @dest: array destination
 * @src: array pointer
 * @n: number of bytes to be copied
 * Return: return value dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i = 0;

while (i <= n)
{
dest[i] = src[i];
i++;
}

return (dest);

}
