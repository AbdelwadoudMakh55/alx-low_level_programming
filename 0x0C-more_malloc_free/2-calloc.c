#include "main.h"
#include <stdlib.h>
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
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb : Number of elements.
 * @size : Size of every element.
 * Return: Pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (0);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (0);
	_memset(array, 0, size * nmemb);
	return (array);
}
