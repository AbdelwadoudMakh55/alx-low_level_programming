#include "main.h"
/**
 *_strlen - return the length of a string.
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
 * _strncpy - Copy a string.
 * @dest : Pointer to string.
 * @src : Pointer to string.
 * @n : integer.
 * Return: string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n >= _strlen(src))
	{
		for (i = 0; *(src + i) != '\0'; i++)
			*(dest + i) = *(src + i);
		*(dest + i) = '\0';
		return (dest);
	}
	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
