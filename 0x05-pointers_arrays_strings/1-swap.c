#include "main.h"
/**
 * swap_int : swaping the values of 2 integers.
 * @a : pointer to first int.
 * @b : pointer to 2 int.
 * Return : void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
