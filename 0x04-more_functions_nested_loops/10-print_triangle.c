#include "main.h"
/**
 * print_triangle - check the code
 * @size : integer
 * Return: void.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size - 1; j++)
				_putchar((char)32);
			for (k = 0; k < i + 1; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
