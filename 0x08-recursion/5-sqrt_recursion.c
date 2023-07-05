#include "main.h"
/**
 * square_root_research - Search for square root starting from 1 * 1.
 * @n : Integer (Number that we want to search for it's sqrt.
 * @power : integer.
 * Return: Square root.
 */
int square_root_research(int n, int power)
{
	if (power * power == n)
		return (power);
	if (power * power < n)
		return (square_root_research(n, power + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n : Integer.
 * Return: Integer (Square root if found or -1).
 */
int _sqrt_recursion(int n)
{
	return (square_root_research(n, 1));
}
