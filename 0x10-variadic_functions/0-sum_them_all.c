#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Sum all it's parameters.
 * @n : First number.
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list_arg;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(list_arg, n);
	for (i = 0; i < n; i++)
		sum += var_arg(list_arg, unsigned int);
	va_end(list_arg);
	return (sum);
}
