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
	int track_last_num = 1;

	while (fib < 4000000)
	{
		fib = n + m;
		if (fib % 2 ==0)
		{
			if (!track_last_num)
				printf(", ");
			else
				track_last_num = 0;
			printf("%lu", fib);
		}
		n = m;
		m = fib;
	}
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
