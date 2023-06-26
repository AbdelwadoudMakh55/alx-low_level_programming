#include "main.h"
/**
 * puts_half - print the 2nd half of a string.
 * @str : pointer to a string.
 * Return: void.
 */
void puts_half(char *str)
{
	int n = 0;
	int i;

	if (_strlen(str) % 2 == 0)
		n = _strlen(str) / 2;
	else
		n = (_strlen(str) - 1) / 2;
	for (i = n; i <= _strlen(str) - 1; i++)
		_putchar(*(str + i));
	_putchar('\n');
}

