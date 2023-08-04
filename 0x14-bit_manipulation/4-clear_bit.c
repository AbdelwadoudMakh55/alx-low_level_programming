#include "main.h"
#include <stdio.h>
/**
 * clear_bit - Set the bit to 1.
 * @n : Number.
 * @index : Index.
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n &= 0 << index;
	return (1);
}
