#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s : Pointer to string.
 * @accept : Pointer to string.
 * Return: a pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		for (j = 0; *(s + j) >= '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
}
