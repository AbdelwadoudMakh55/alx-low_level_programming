#include <stdio.h>
#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s : pointer to a string.
 * Return: len; length of string str.
 */
int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
/**
 * infinite_add - Add 2 integers.
 * @n1 : String literal..
 * @n2 : String literal.
 * @r : Pointer to array.
 * @size_r : int; size of buffer r.
 * Return: Pointer to string.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int len_n1 = _strlen(n1) - 1;
	int len_n2 = _strlen(n2) - 1;
	int len_r = size_r - 1;

	if (size_r < _strlen(n1) || size_r < _strlen(n2))
	{
		r[0] = '0';
		return (r);
	}
	for (i = 0; i < size_r; i++)
		r[i] = '0';
	for (i = 0; i < _strlen(n1); i++)
	{
		if (n2[len_n2 - i] != '\0')
		{
			if (r[len_r - i] + n1[len_n1 - i] + n2[len_n2 - i] - 144 <= 9)
				r[len_r - i] = r[len_r - i] + n1[len_n1 - i] + n2[len_n2 - i] - 96;
			else
			{
				r[len_r - i] = (r[len_r - i] + n1[len_n1 - i] + n2[len_n2 - i] - 144)
				% 10 + 48;
				r[len_r - 1 - i] += 1;
			}
		}
		else
		{
			if (r[len_r - i] + n1[len_n1 - i] - 96 <= 9)
				r[len_r - i] = r[len_r - i] + n1[len_n1 - i] - 48;
			else
			{
				r[len_r - i] = (r[len_r - i] + n1[len_n1 - i] - 96) % 10 + 48;
				r[len_r - 1 - i] += 1;
			}
		}
	}
	r[i + 1] = '\0';
	return (r);
}
