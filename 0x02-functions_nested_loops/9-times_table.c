#include "main.h"

/**
 * times_table -  that prints the table time 9
 *
 *Return: void
 **/

void times_table(void)
{

int col = 0, row, result;

for (row = 0; row <= 9; row++)
{
	for (col = 0; col <= 9; col++)
	{
	result = (row * col);

	if (col == 0)
	{
	_putchar('0' + result);
	}

	else if (result <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + (result));
	}

	else if (result > 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar('0' + (result / 10));
		_putchar('0' + (result % 10));
	}
}
_putchar('\n');
}
}
