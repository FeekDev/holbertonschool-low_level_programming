#include "main.h"

/**
 * jack_bauer -  that prints the minutes
 *
 *Return: last digit of number
 **/

void jack_bauer(void)
{

int h = 0;
int m = 0;

while (h < 24)
{
	while (m < 60)
	{
	_putchar('0' + (h / 10));
	_putchar('0' + (h % 10));
	_putchar(':');
	_putchar('0' + (m / 10));
	_putchar('0' + (m % 10));
	_putchar('\n');
	m++;
	}
	m = 0;
	h++;
}
}
