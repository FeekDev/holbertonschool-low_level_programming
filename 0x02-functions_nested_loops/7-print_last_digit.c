#include "main.h"

/**
 * print_last_digit -  that prints the last digit of a number with mod
 *@n: - integer the number
 *Return: last digit of number
 **/

int print_last_digit(int n)
{
if (n < 0)
{
n *= -1;

_putchar ('0' + (n % 10));
}
else
{
_putchar ('0' + (n % 10));
}
return (n % 10);
}
