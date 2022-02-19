#include "main.h"

/**
 *more_numbers - function that prints the numbers.
 **/

void more_numbers(void)
{
	int i = 0;
	int num = 0;

	while (i < 10)
	{
		while (num <= 14)
		{
			if (num >= 10)
			{
			_putchar('0' + (num / 10));
			_putchar('0' + (num % 10));
			}

			if (num < 10)
			{
			_putchar('0' + num);
			}
			num++;
		}

	i++;
	num = 0;
	_putchar('\n');
	}
}
