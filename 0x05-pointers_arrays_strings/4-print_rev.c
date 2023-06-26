#include "main.h"
/**
 * print_rev - Print a string in reverse.
 * @s : pointer to string.
 * Return: void.
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
