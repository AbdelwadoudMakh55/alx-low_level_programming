#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @size : unsigned int size of array.
 * @c : Char.
 * Return: Pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *)malloc(size);
	if (size == 0)
		return (0);
	else
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	return (array);
}
