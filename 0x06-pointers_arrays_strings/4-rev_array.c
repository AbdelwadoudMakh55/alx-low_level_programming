#include "main.h"
/**
 * reverse_array - return the length of a string.
 * @a : Array.
 * @n : Integer
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int c = *(a + i);

		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = c;
	}
}
