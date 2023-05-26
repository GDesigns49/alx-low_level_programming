#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of argument passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: total.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list add_them;
	unsigned int total = 0, i;

	if (n == 0)
	{
		return (0);
	}

	va_start(add_them, n);
	for (i = 0; i < n; i++)
	{
		total = total + va_arg(add_them, const unsigned int);
	}

	va_end(add_them);

	return (total);
}
