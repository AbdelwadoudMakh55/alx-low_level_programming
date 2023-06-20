#include <stdio.h>
#include "main.h"
/**
 * fibonacci - Entry point
 * @n : integer
 * Return: Always int (Success)
 */
int fibonacci(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else
		return (fibonacci(n - 1) + fibonacci(n - 2));
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 50; i++)
		printf("%d", fibonacci(i));
	putchar('\n');
	return (0);
}
