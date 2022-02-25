#include "main.h"
#include <stdio.h>

/**
 *reverse_array - reverses the content of an array of integers.
 * Return: Always dest.
 * @a: the parameter
 * @n: parameter
 **/
void reverse_array(int *a, int n)
{
	int tmp, beg = 0;
	int end = n - 1;

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
}

