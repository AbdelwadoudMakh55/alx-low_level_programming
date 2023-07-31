#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h : listint_t list.
 * Return: Number of nodes (size_t).
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = (*h).next;
	}
	return (len);
}
