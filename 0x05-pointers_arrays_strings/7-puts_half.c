#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s : pointer to a string.
 * Return: len; length of string str.
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
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
		n = _strlen(str) / 2 + 1;
	for (i = n; i <= _strlen(str) - 1; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
