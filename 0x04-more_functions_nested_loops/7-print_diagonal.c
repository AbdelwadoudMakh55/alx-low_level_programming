#include "main.h"
/**
 * print_diagonal - check the code
 * @n : integer
 * Return: void.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar((char)32);
		_putchar((char)92);
		_putchar('\n');
	}
	_putchar('\n');
}
