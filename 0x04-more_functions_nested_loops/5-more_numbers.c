#include "main.h"
#include <stdio.h>

/**
 *more_numbers - function that prints the numbers int .
 **/

void more_numbers(void)
{
	int i = 0;
	char num = 0;

	while (i < 10)
	{
		while (num <= 14)
		{
			if (num < 10)
			{
			_putchar('0' + num);

			}

			else
			{
			_putchar('0' + (num / 10));
			_putchar('0' + (num % 10));
			}

			num++;
		}
	i++;
	num = 0;
	printf("\n");
	}
}

