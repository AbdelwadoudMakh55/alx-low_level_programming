#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: No return (void) (Success)
 */
void print_alphabet(void)
{
	int i = 0;
	int n = 97;

	while (i < 26)
	{
		_putchar((char)n + i);
		i++;
	}
	_putchar('\n');
}
