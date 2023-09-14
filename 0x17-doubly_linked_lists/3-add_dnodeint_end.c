#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head : Pointer to Pointer to head of dlistint_t list.
 * @n : Data of new node.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	if (*head == NULL)
	{
		(*new).next = NULL;
		(*new).prev = NULL;
		*head = new;
		return (new);
	}
	while ((*current).next != NULL)
		current = (*current).next;
	(*new).next = NULL;
	(*new).prev = current;
	(*current).next = new;
	return (new);
}
