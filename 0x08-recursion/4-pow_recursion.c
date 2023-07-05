#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x : Integer.
 * @y : Integer; Power.
 * Return: Integer (x to the power y).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 1)
		return (x);
	if (x == 1 || y == 0)
		return (1);
	if (x == 0)
		return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
