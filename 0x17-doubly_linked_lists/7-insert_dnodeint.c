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
	dlistint_t *new, *current = *h, *prev_n;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	if (idx == 0)
	{
		(**h).prev = new;
		(*new).next = *h;
		(*new).prev = NULL;
		*h = new;
		return (new);
	}
	while (current != NULL && i != idx)
	{
		prev_n = current;
		current = (*current).next;
		i++;
	}
	if (i != idx)
		return (NULL);
	(*prev_n).next = new;
	(*new).prev = prev_n;
	(*new).next = current;
	(*current).prev = new;
	return (new);
}
