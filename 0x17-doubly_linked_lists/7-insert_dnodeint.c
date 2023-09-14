#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h : Pointer to Pointer to head of dlistint_t list.
 * @idx : Index of node to be inserted.
 * @n : Data of new node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h, *next_n;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	while ((*current).next != NULL && i < idx - 1)
	{
		i++;
		current = (*current).next;
	}
	next_n = (*current).next;
	(*current).next = new;
	(*new).prev = current;
	(*new).next = next_n;
	return (new);
}
