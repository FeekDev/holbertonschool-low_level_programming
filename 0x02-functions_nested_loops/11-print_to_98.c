#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - adds natural numbers
 *
 *Return: void
 *@n: int
 **/

void print_to_98(int n)
{

while (n < 98)
{
	printf("%d, ", n);
	n++;
}

while (n > 98)
{
	printf("%d, ", n);
	n--;
}
if (n == 98)
{
printf("%d", n);
}
printf("\n");
}

