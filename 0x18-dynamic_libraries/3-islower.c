#include "main.h"
/**
 * _islower - Entry point
 * @c : int
 * Return: Always void (Success)
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
