#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the function variadics
 * @n: the number of srguments
 * Return: return the operations math
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(add, n);

	/* Process*/
	for (i = 0; i < n; i++)
		sum += va_arg(add, int);

	va_end(add);

	return (sum);
}
