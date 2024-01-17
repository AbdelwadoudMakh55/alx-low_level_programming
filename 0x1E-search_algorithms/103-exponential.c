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
 * exponential_search - Function for exponential search algorithm.
 * @array: Pointer to first element of array.
 * @size: Size of array.
 * @value: Value to search for.
 * Return: index of value in array or -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t r = 0, h, l, mid;

	if (array == NULL)
		return (-1);
	if (array[r] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	r = 1;
	while (array[r] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", r, array[r]);
		r *= 2;
	}
	if (r >= size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			r / 2, size - 1);
		h = size - 1;
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			r / 2, r);
		h = r;
	}
	l = r / 2;
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
