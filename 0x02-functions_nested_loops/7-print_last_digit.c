#include "main.h"
/**
 * print_last_digit - Entry point
 * @n : int
 * Return: last digit of n (Success)
 */
int print_last_digit(int n)
{
	int last_digit = 0;
	int num = _abs(n);

	last_digit = num % 10;
	_putchar((char)last_digit + 48);
	return (last_digit);
}
