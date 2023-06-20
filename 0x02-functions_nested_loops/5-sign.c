#include "main.h"
/**
 * print_sign - Entry point
 * @n : int
 * Return: 1 or 0 (Success)
 */
int print_sign(int n)
{
	int r_value = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n > 0)
	{
		_putchar('+');
		r_value = 1;
	}
	if (n < 0)
	{
		_putchar('-');
		r_value = -1;
	}
	return (r_value);
}
