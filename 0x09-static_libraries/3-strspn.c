#include "main.h"
/**
 * _strspn - Get the length of a prefix substring.
 * @s : Pointer to string.
 * @accept : Pointer to string.
 * Return: Number of bytes of s that are also in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int count = 0;

	while ((*(s + i) <= 122 && *(s + i) >= 97)
	|| (*(s + i) <= 90 && *(s + i) >= 65))
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count += 1;
			}
		}
		i++;
	}
	return (count);
}
