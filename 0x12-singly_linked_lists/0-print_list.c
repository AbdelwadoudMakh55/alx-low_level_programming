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
	list_t *ptr = (*h).next;

	if (h == NULL)
		return (-1);
	if ((*h).str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%lu] %s\n", (*h).len, (*h).str);
	n_nodes++;
	while (ptr != NULL)
	{
		if ((*ptr).str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", (*ptr).len, (*ptr).str);
		n_nodes++;
		ptr = (*ptr).next;
	}
	return (n_nodes);
}
