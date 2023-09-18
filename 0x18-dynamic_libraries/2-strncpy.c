#include "main.h"
#include <string.h>
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

	if (n >= strlen(src))
	{
		for (i = 0; *(src + i) != '\0'; i++)
			*(dest + i) = *(src + i);
		for (i = strlen(src); i < n; i++)
			*(dest + i) = '\0';
		return (dest);
	}
	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
