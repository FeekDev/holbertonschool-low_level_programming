#include "main.h"
#include <stdio.h>

/**
 *more_numbers - function that prints the numbers int .
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
		printf("\n");
	}
}

