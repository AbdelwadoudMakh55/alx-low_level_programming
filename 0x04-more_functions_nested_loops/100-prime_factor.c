#include <stdio.h>
#include <math.h>
/**
 * main - print the largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long i;
	long j;
	int prime_or_not;
	long max_prime = 0;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % 2 == 0)
		{
			prime_or_not = 1;
			for (j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					prime_or_not == 1;
					break;
				}
			}
		}
		if (prime_or_not == 1)
			max_prime = i;
	}
	printf("%ld", max_prime); 
	return (0);
}
