#include "main.h"
/**
 * islower - Entry point
 *
 * Return: Always void (Success)
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return 1
	else
		return 0
}
