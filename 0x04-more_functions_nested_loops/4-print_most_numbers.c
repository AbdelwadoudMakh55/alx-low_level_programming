#include "main.h"
/**
 * print_most_numbers - check the code
 *
 * Return: Always void.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar((char)48 + i);
	_putchar('\n');
}
