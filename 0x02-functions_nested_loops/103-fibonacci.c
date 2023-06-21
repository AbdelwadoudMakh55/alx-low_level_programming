#include <stdio.h>
#include "main.h"
/**
 * fibonacci_even - Entry point
 *
 * Return: Always int (Success)
 */
void fibonacci_even(void)
{
	unsigned long n = 0;
	unsigned long m = 1;
	unsigned long fib;
	unsigned long sum = 0;

	while (fib < 4000000)
	{
		fib = n + m;
		if (fib % 2 == 0)
			sum += fib;
		n = m;
		m = fib;
	}
	printf("%lu", sum);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibonacci_even();
	putchar('\n');
	return (0);
}
