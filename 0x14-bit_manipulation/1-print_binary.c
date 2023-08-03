#include "main.h"
#include <stdio.h>
/**
 * print_binary - Print the corresponding binary value of an int.
 * @n : Number.
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	int i, num, count_1 = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		num = n >> i;
		if ((num & 1) == 1)
		{
			_putchar('1');
			count_1 = 1;
		}
		else if ((num & 1) == 0 && count_1 != 0)
			_putchar('0');
	}
}
