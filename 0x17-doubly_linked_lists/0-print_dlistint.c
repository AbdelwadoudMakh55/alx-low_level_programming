#include "lists.h"
#include <stdlib.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h : Pointer to head of dlistint_t list.
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		len++;
		h = (*h).next;
	}
	return (len);
}
