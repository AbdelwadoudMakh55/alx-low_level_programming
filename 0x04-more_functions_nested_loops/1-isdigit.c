#include "main.h"
/**
 * _isdigit - check the code
 * @c : integer
 * Return: 1 if digit 0 else.
 */
int _isdigit(int c)
{
	if ((int)c <= 57 && (int)c >= 48)
		return (1);
	return (0);
}
