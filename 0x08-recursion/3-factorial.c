#include "main.h"
/**
 * factorial - Return factorial of a given number.
 * @n : integer.
 * Return: integer (Factorial of n).
 */
int factorial(int n)
{
	if (n < 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
