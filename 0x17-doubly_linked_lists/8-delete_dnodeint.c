#include "lists.h"
#include <stdlib.h>
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
	dlistint_t *current, *next_n, *prev_n;

	if (*head == NULL || head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		next_n = (*current).next;
		if (next_n != NULL)
		{
			free(current);
			(*next_n).prev = NULL;
			*head = next_n;
			return (1);
		}
		free(current);
		*head = NULL;
		return (1);
	}
	while (i < index && next_n != NULL)
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
