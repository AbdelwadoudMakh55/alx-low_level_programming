#include "main.h"
/**
 *  * _strlen - return the length of a string.
 *   * @s : pointer to a string.
 *    * Return: len; length of string str.
 *     */
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
