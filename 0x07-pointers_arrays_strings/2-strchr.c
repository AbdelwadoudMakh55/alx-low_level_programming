#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locate a character in a string.
 * @s : Pointer to string.
 * @c : char.
 * Return: Pointer to the first occurence of c.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return ('\0');
}
