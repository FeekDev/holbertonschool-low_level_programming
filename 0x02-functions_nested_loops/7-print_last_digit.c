#include "main.h"

/**
 * print_last_digit -  that prints the last digit of a number with mod
 *@n: - integer the number
 *Return: 0
 **/

int print_last_digit(int n)
{
if (n < 0)
{
n *= -1;

_putchar('0' + (n % 10));

}
else
{
return (n % 10);
}
return (0);
}
