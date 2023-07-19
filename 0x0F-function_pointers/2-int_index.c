#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer.
 * @array : Array of integers (Pointer to array).
 * @size : Size of array (Unsigned int).
 * @cmp : pointer to the function to be used to compare values.
 * Return: the index of the first element for which the cmp function does not
 *  return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
