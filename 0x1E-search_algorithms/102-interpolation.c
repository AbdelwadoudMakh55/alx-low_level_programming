#include "search_algos.h"
#include <math.h>
/**
 * interpolation_search - Function for interpolation search algorithm.
 * @array: Pointer to first element of array.
 * @size: Size of array.
 * @value: Value to search for.
 * Return: index of value in array or -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1, low = 0, pos;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		else if (array[pos] > value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos,
			array[pos]);
			high = pos - 1;
		}
		else if (array[pos] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos,
				array[pos]);
			return (pos);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", pos,
			array[pos]);
			low = pos + 1;
		}
	}
	return (-1);
}
