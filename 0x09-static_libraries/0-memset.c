#include "main.h"
/**
 * _memset - Fill memory with a constant byte.
 * @s : Pointer to string. (Memory area)
 * @b : constant byte.
 * @n : Number of bytes to be filled.
 * Return: Pointer to the memory area filled by 'n' b.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
