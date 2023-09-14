#include "lists.h"
#include <stdlib.h>
/**
 * doublylistint_len - returns the number of elements in a dlistint_t list.
 * @h : Pointer to head of dlistint_t list.
 * Return: Number of nodes.
 */
size_t doublylistint_len(dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = (*h).next;
	}
	return (len);
}
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list.
 * @head : Pointer to Pointer of head of dlistint_t.
 * @index : Index of node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head, *prev_n, *next_n;

	if (head == NULL || doublylistint_len(*head))
		return (-1);
	if (index == 0)
	{
		current = (*current).next;
		free(*head);
		*head = current;
		(*head).prev = NULL;
		return (1);
	}
	while (i != index && current != NULL)
	{
		prev_n = current;
		current = (*current).next;
		next_n = (*current).next;
		i++;
	}
	if (i != index)
		return (-1);
	free(current);
	(*prev_n).next = next_n;
	(*next_n).prev = prev_n;
	return (1);
}
