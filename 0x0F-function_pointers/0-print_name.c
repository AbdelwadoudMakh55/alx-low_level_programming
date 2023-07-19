#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name.
 * @name : Name (Pointer to string).
 * @f : Pointer to function.
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
