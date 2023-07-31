#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head : First node of listint_t list (Pointer to pointer).
 * @idx : Index.
 * @n : Value of node.
 * Return: Pointer to newly added node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *previous, *ptr, *new_node;
	unsigned int i = 0;

	ptr = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);
	(*new_node).n = n;
	if (idx == 0)
	{
		(*new_node).next = ptr;
		*head = new_node;
		return (new_node);
	}
	while (i != idx && ptr != NULL)
	{
		previous = ptr;
		ptr = (*ptr).next;
		i++;
	}
	if (i != idx)
		return (0);
	(*previous).next = new_node;
	(*new_node).next = ptr;
	return (new_node);
}
