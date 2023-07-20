#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Print numbers, followed by a new line.
 * @seperator : the string that seprates the number (Pointer to string).
 * @n : The number of numbers to be printed (const unsigned int).
 * Return: Void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_nums;
	unsigned int i;

	if (separator == NULL)
		separator = "\0";
	va_start(list_nums, n);
	printf("%u", va_arg(list_nums, unsigned int));
	for (i = 0; i < n; i++)
	{
		printf("%s", separator);
		printf("%u", va_arg(list_nums, unsigned int));
	}
	printf("\n");
}
