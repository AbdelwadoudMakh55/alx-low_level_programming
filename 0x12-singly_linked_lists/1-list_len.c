#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h : list_t list.
 * Return: Number of nodes (size_t).
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = (*h).next;
	}
	return (len);
}
