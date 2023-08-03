#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n : Number.
 * @index : Index.
 * Return: 1 or 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	num = n >> index;
	if ((num & 1) == 1)
		return (1);
	return (0);
}
