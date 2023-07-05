#include "main.h"
/**
 * search_prime - Search if the number is prime or not.
 * @n : Integer.
 * @num : Divided.
 * Return: 1 if prime 0 if not.
 */
int search_prime(int n, int num)
{
	if (n == 1 || n < 0)
		return (0);
	if (num + 1 < n)
	{
		if (n % num != 0)
			return (search_prime(n, num + 1));
		else
			return (0);
	}
	return (1);
}
/**
 * is_prime_number - Check if prime or not.
 * @n : Integer.
 * Return: 1 if prime or 0 if not.
 */
int is_prime_number(int n)
{
	return (search_prime(n, 2));
}
