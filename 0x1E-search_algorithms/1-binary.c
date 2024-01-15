#include "search_algos.h"
/**
 * print_array - Printing array.
 * @array: Pointer to first element of array.
 * @l: lowest point of array.
 * @h: Highest point.
 * Return: NULL.
 */
void print_array(int *array, size_t l, size_t h)
{
	printf("Searching in array: ");
	for (; l <= h; l++)
	{
		if (l == h)
			printf("%d", array[l]);
		else
			printf("%d, ", array[l]);
	}
	printf("\n");
}
/**
 * binary_search - Function for binary search.
 * @array: Pointer to first element of array.
 * @size: Size of array.
 * @value: Value to search for.
 * Return: index of value in array or -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (l <= h)
	{
		mid = (h + l) / 2;
		print_array(array, l, h);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			h = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
