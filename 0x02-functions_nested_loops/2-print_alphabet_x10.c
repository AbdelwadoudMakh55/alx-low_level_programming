#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always void (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;
	int n = 48;

	while (i < 10)
	{
		while (j < 26)
		{
			_putchar((char)n + j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
