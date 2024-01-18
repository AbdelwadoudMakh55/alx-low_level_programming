#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Function for jump search algorithm.
 * @array: Pointer to first element of array.
 * @size: Size of array.
 * @value: Value to search for.
 * Return: index of value in array or -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t j_block = sqrt(size), i = j_block, j;

	if (array == NULL)
		return (-1);
	printf("Value checked array[0] = [%d]\n", array[0]);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += j_block;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - j_block, i);
	j = i - j_block;
	for (; j < i; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
