#include "main.h"
/**
 * print_number - Print an integer.
 * @n : integer.
 * Return: void.
 */
void print_number(int n)
{
	int compteur = 0;
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
	while (n != 0)
	{
		digit = 48 + n / (int)pow(10, compteur - 1);
		_putchar(digit);
		n = n % (int)pow(10, compteur - 1);
		compteur -= 1;
	}
}
