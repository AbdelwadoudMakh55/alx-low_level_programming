#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line.
 * @s : Pointer to string.
 * Return: void (string, followed by a new line).
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		if (*s == '\0')
			_putchar('\n');
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
