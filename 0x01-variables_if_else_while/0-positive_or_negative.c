#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%f is positive", n);
	}
	if (n == 0)
	{
		printf("%f is zero", n);
	}
	else {
		printf("%f is negative", n);
	}
	return (0);
}
