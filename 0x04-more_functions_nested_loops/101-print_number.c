#include "main.h"
#include <math.h>
/**
 * print_number - Print an integer.
 * @n : integer.
 * Return: void.
 */
void print_number(int n)
{
	int compteur = 0;
	int power_10 = 1;
	int i;
	int digit = 0;
	int copy_n = n;

	if (n == 0)
		_putchar(48);
	if (n <0)
	{
		_putchar(45);
		n = -n;
	}
	while (copy_n != 0)
	{
		copy_n = copy_n / 10;
		compteur += 1;
	}
	for (i = 0; i < compteur - 1; i++)
		power_10 *= 10;
	while (n != 0)
	{
		digit = 48 + n / power_10;
		_putchar(digit);
		n = n % power_10;
		power_10 /= 10;
	}
}
