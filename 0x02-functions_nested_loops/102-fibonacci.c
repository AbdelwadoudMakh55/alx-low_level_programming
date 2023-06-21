#include <stdio.h>
#include "main.h"
/**
 * fibonacci - Entry point
 *
 * Return: Always int (Success)
 */
void fibonacci(void)
{
	float n = 0;
	float m = 1;
	int i;
	float fib = 0;
	int track_last_num = 1;

	for (i = 0; i < 50; i++)
	{
		if (!track_last_num)
		{
			printf(", ");
		}
		else
			track_last_num = 0;
		fib = n + m;
		printf("%.0f", fib);
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
	fibonacci();
	putchar('\n');
	return (0);
}
