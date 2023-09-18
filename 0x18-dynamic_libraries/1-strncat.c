#include "math.h"
#include <string.h>
/**
 * _strncat - Concatenate two strings.
 * @dest : Pointer to string.
 * @src : Pointer to string.
 * @n : integer.
 * Return: Pointer to string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	if (n > strlen(src))
	{
		for (i = 0; *(src + i) != '\0'; i++)
			*(dest + len + i) = *(src + i);
		*(dest + strlen(dest)) = '\0';
		return (dest);
	}
	for (i = 0; i < n; i++)
		*(dest + len + i) = *(src + i);
	*(dest + strlen(dest)) = '\0';
	return (dest);
}
