#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h : list_t list.
 * Return: Number of nodes (size_t).
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes = 0;

	while (h != NULL)
	{
		if ((*h).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", (*h).len, (*h).str);
		n_nodes++;
		h = (*h).next;
	}
	return (n_nodes);
}
