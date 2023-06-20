#include "main.h"
#include <stdio.h>
/**
 * _natural - Entry point
 * 
 * Return: Always integer (Success)
 */
int _natural(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	return (sum);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%d", _natural());
	putchar('\n');
	putchar('\n');
	return (0);
}
