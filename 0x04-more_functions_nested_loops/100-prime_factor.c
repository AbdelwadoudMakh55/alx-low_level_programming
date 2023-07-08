#include <stdio.h>
/**
 * main - print the largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long int n = 612852475143;
	unsigned int i;
	unsigned int max_fact = 0;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			max_fact = i;
			n = n / i;
		}
	}
	printf("%u", max_fact);
	return (0);
}
