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
 * recursive_binary - Function for recursive binary search.
 * @array: Pointer to first element of array.
 * @value: Value to search for.
 * @l: Low pointer.
 * @h: High pointer.
 * Return: index of value in array or -1.
 */
int recursive_binary(int *array, int value, size_t l, size_t h)
{
	size_t mid;
	int f_index, index = -1;

	mid = (h + l) / 2;
	print_array(array, l, h);
	if (array[mid] == value)
	{
                f_index = (int)mid;
		h = mid - 1;
		l = 0;
		index = recursive_binary(array, value, l, h);
		if (index == -1)
			index = f_index;
	}
	else if (array[mid] > value)
	{
		h = mid - 1;
		index = recursive_binary(array, value, l, h);
	}
	else
	{
		l = mid + 1;
		index = recursive_binary(array, value, l, h);
	}
	return (index);
}
/**
 * advanced_binary - Function for binary search.
 * @array: Pointer to first element of array.
 * @size: Size of array.
 * @value: Value to search for.
 * Return: index of value in array or -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, mid;
	int index = -1, f_index;

	if (array == NULL)
		return (-1);
	mid = (h + l) / 2;
	if (array[mid] > value)
	{
		h = mid - 1;
		index = recursive_binary(array, value, l, h);
	}
	if (array[mid] < value)
	{
		l = mid + 1;
		index = recursive_binary(array, value, l, h);
	}
	if (array[mid] == value)
	{
		f_index = (int)mid;
		h = mid - 1;
		index = recursive_binary(array, value, l, h);
		if (index == -1)
			index = f_index;
	}
	return (index);
}
