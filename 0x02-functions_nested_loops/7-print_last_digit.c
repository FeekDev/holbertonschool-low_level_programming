#include "main.h"

/**
 * print_last_digit -  that prints the last digit of a number with mod
 *@n: - integer the number
 *Return: last digit of number
 **/

int print_last_digit(int n)
{
int md = n % 10;
if (n > 0)
{
_putchar ('0' + md);
}
else
{

md *= -1;

_putchar ('0' + md);

}
return (md);
}
