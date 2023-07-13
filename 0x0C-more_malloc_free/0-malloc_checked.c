#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b : Size of allocated memory.
 * Return: Pointer to the memory on the heap.
 */
void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (alloc == NULL)
		exit(98);
	return (alloc);
}
