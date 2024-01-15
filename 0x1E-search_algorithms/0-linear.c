#include "search_algos.h"
/**
 * linear_search - Function for linear search.
 * @array: Pointer to first element of array.
 * @size: Number of elements of array.
 * @value: Value to search for.
 * Return: The index of value in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}
