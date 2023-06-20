#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
