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
	int i, j;

	if (size <= 0)
		printf("\n");
	for (i = 0; i < size; i += 10)
	{
		printf("%p:", &b[i]);
		for (j = i; (j < i + 10 && j < size); j += 2)
			printf(" %.2x%.2x", b[j], b[j + 1]);
		if (j != i + 10)
			printf("          ");
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
