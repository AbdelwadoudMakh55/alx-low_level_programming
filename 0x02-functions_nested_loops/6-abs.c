#include "main.h"
/**
 * _abs  - Entry point
 * @n : int
 * Return: Absolute value (Success)
 */
int _abs(int n)
{
	int abs = 0;

	if (n >= 0)
		abs = n;
	else
		abs = n * -1;
	return (abs);
}
