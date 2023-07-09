#include "main.h"
#include <stdio.h>
/**
 * print_buffer - print the content of size bytes of the buffer pointed by b.
 * @b : Pointer to buffer.
 * @size : size of buffer.
 * Return: Buffer.
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	for (i = 0; i < size; i += 10)
	{
		printf("%.8x:", i);
		for (j = i; (j < i + 10 && j < size); j += 2)
		{
			if (!(j + 1 < size))
				printf(" %.2x", b[j]);
			else
				printf(" %.2x%.2x", b[j], b[j + 1]);
		}
		printf(" ");
		for (k = 0; k < 10 - (size - i); k++)
			printf(" ");
		for (j = i; (j < i + 10 && j < size); j++)
		{
			if (b[j] <= 126 && b[j] >= 32)
				printf("%c", b[j]);
			else
				putchar(46);
		}
		printf("\n");
	}
}
