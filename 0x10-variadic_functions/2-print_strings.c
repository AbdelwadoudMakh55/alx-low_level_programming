#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - Print strings, followed by a new line.
 * @separator : the string that seprates the strings (Pointer to string).
 * @n : The number of strings to be printed (const unsigned int).
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_strings;
	unsigned int i;
	char *take_string;

	if (separator == NULL)
		separator = "\0";
	va_start(list_strings, n);
	for (i = 0; i < n; i++)
	{
		take_string = va_arg(list_strings, char *);
		if (take_string == NULL)
			printf("(nil)");
		else
			printf("%s", take_string);
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
