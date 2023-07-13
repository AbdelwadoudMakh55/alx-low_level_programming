#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	return (array);
}
