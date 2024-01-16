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
	size_t j_block = sqrt(size), i = 0, j;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	for (; i < size; i += j_block)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				i - j_block, i);
			for (j = i - j_block; j < size; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			return (-1);
		}
		else if (array[i] < value)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - j_block, i);
	printf("Value checked array[%lu] = [%d]\n", i - j_block,
		array[i - j_block]);
	return (-1);
}
