#include "main.h"
/**
 * _memcpy - Copy memory area.
 * @dest : Pointer to string.
 * @src : Pointer to string.
 * @n : Number of bytes.
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i)
	return (dest);
}
