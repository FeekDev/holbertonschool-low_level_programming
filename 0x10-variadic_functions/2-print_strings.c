#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - this function print number
 * @separator: this parameter check the comas
 * @n: the count of number
 * Return: void
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *s;

	if (n > 0)
	{
		va_start(str, n);

		for (i = 1; i <= n; i++)
		{
			s = va_arg(str, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);

			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(str);
	}
	printf("\n");
}
