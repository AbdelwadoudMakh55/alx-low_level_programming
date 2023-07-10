#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width : Number of columns.
 * @height : Number of rows.
 * Return: Pointer to 2D array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
		return (0);
	array = (int **)malloc(height * sizeof(int *));
	if (*array == NULL)
		return (0);
	for (i = 0; i < height; i++)
		array[i] = (int *)malloc(width * sizeof(int));
	if (array == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
