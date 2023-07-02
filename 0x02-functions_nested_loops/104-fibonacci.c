#include <stdio.h>
#include "main.h"
/**
 * fibonacci - Entry point
 *
 * Return: Always int (Success)
 */
void fibonacci(void)
{
	unsigned long n = 2;
	unsigned long m = 1;
	int i;
	int track_last_num = 1;
	unsigned long n1, n2, m1, m2;
	unsigned long ten_power = 1000000000;

	printf("%lu, ", m);
	for (i = 0; i < 90; i++)
	{
		if (!track_last_num)
		{
			printf(", ");
		}
		else
			track_last_num = 0;
		printf("%lu", n);
		n += m;
		m = n - m;
	}
	n1 = n / ten_power;
	n2 = n % ten_power;
	m1 = m / ten_power;
	m2 = m % ten_power;
	for (i = 0; i < 7; i++)
	{
		if (!track_last_num)
			printf(", ");
		else
			track_last_num = 0;
		printf("%lu", n1 + n2 / ten_power);
		printf("%lu", n2 % ten_power);
		n1 += m1;
		n2 += m2;
		m1 = n1 - m1;
		m2 = n2 - m2;
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
