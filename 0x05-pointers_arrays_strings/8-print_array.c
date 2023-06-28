#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n integer of an array of integers.
 * @a : Pointer to an array of integers.
 * @n : Number of int to be printed.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
	}
	printf("\n");
}
