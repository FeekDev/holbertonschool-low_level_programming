#include "main.h"
#include <stdio.h>

/**
 *more_numbers - function that prints the numbers int .
 **/

void more_numbers(void)
{
	char i;
	int count;

	for (counter = 1; counter <= 10; counter++)
	{
		for (i = 0; i <= 14, i++)
		{
			if (i < 10)
			{
			_putchar('0' + i);

			}

			else
			{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			}
		}
	printf("\n");
	}
}

