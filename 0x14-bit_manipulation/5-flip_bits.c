#include "main.h"
/**
 * flip_bits - the number of bits you would need to flip to get from one number
 * to another.
 * @n : Number.
 * @m : 2nd number.
 * Return: Int.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned int bit_diff = 0;
	unsigned long int diff;

	if (n == m)
		return (0);
	diff = n ^ m;
	for (i = 0; i < 32; i++)
	{
		if ((diff & 1) == 1)
			bit_diff++;
		diff = diff >> 1;
	}
	return (bit_diff);
}
