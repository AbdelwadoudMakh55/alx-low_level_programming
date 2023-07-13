#include "main.h"
#include <stdlib.h>
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
		*(dest + i) = *(src + i);
	return (dest);
}
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated with a call to malloc.
 * @old_size :  size, in bytes, of the allocated space for ptr.
 * @new_size : the new size, in bytes of the new memory block.
 * Return: Pointer to new allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *realloc;
	unsigned int min_size = old_size;

	if (new_size < min_size)
		min_size = new_size;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		realloc = malloc(new_size);
		if (realloc == NULL)
			return (0);
		return (realloc);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	realloc = malloc(new_size);
	if (realloc == NULL)
		return (0);
	_memcpy(realloc, ptr, min_size);
	free(ptr);
	return (realloc);
}
