#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h : Pointer to head of dlistint_t list.
 * Return: Number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = (*h).next;
	}
	return (len);
}
