#include "main.h"
#include <stdio.h>
/**
 * Fizz_Buzz - The Fizz Buzz test
 *
 * Return: void.
 */
void Fizz_Buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz ");
		if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz ");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		if (!(i % 3 == 0) && !(i % 5 == 0))
			printf("%d ", i);
	}
}
/**
 * main - Print The Fizz Buzz test
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	Fizz_Buzz();
	printf("\n");
	return (0);
}
