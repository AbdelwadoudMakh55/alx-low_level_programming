#include "main.h"
#include <stdio.h>
/**
 * power - return power of a number.
 * @a : Int.
 * @b : Int.
 * Return: Power of a number;
 */
unsigned int power(int a, int b)
{
	int result = 1, i;

	if (b == 0)
		return (1);
	for (i = 0; i < b; i++)
		result = result * a;
	return (result);
}
/**
 * _strlen - Length of a string.
 * @s : String.
 * Return: Length of a string (int);
 */
int _strlen(const char *s)
{
	int i = 0, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
/**
 * check_01 - Check if a string has chars other then 0 and 1.
 * @s : Pointer to string.
 * Return: 1 if True 0 else.
 */
int check_01(const char *s)
{
	int i = 0;
	int result = 1;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] != '0' && s[i] != '1')
			result = 0;
	return (result);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b : Pointer to string.
 * Return: the base 10 of b.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0, len = _strlen(b) - 1;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (check_01(b) == 0)
			return (0);
		if (b[i] == '1')
			num += power(2, len - i);
	}
	return (num);
}
