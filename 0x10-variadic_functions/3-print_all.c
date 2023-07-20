#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format : list of types of arguments passed to the function.
 * Return: Void.
 */
void print_all(const char * const format, ...)
{
	va_list my_list;
	int i = 0;
	char *separator = "";
	char *string;

	va_start(my_list, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i' :
				printf("%s%d", separator, va_arg(my_list, int));
				break;
			case 'f' :
				printf("%s%f", separator, va_arg(my_list, double));
				break;
			case 'c' :
				printf("%s%c", separator, va_arg(my_list, int));
				break;
			case 's' :
				string = va_arg(my_list, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", separator, string);
			default :
				break;
		}
		i++;
		separator = ", ";
	}
	va_end(my_list);
	printf("\n");
}
