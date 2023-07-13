#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min : Min value.
 * @max : Max value.
 * Return: Pointer to arrayb of int.
 */
int *array_range(int min, int max)
{
	int *ints;
	int i;

	if (min > max)
		return (0);
	ints = malloc((max - min + 1) * sizeof(int));
	if (ints == NULL)
		return (0);
	for (i = 0; i < max; i++)
		ints[i] = min + i;
	return (ints);
}
