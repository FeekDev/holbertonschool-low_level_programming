#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - this function print number
 * @separator: this parameter check the comas
 * @n: the count of number
 * Retrun: void
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list sep;

	if (n > 0)
	{
		va_start(sep, n);

		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(sep, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(sep);
	}
	printf("\n");
}
