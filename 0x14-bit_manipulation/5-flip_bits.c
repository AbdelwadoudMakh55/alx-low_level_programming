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
	unsigned long int  num1, num2;

	if (n == m)
		return (0);
	for (i = 0; i <= 31; i++)
	{
		num1 = n >> i;
		num2 = m >> i;
		if (!((num1 & 1) == (num2 & 1))
		|| !((num1 & 0) == (num2 & 0)))
			bit_diff++;
	}
	return (bit_diff);
}
