#include "main.h"
/**
 * _isupper - Entry point
 * @c : integer
 * Return: Always int (Success)
 */
int _isupper(int c)
{
	if ((int)c <= 90 && (int)c >= 65)
		return (1);
	else
	       return (0);	
}
