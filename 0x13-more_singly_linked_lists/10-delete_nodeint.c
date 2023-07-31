#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h : listint_t list.
 * Return: Number of nodes (size_t).
 */
size_t listint_len(listint_t *h)
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
 * delete_nodeint_at_index - Delete node at a given position.
 * @head : First node of listint_t list (Pointer to pointer).
 * @index : Index.
 * Return: 1 Success, -1 Failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *ptr, *copy_head;
	unsigned int i = 0;

	if (head == NULL || listint_len(*head) == 0)
		return (-1);
	copy_head = *head;
	ptr = *head;
	if (index == 0)
	{
		ptr = (*ptr).next;
		free(*head);
		*head = ptr;
		return (1);
	}
	while (i != index && ptr != NULL)
	{
		previous = ptr;
		ptr = (*ptr).next;
		i++;
	}
	if (i != index)
		return (-1);
	(*previous).next = (*ptr).next;
	free(ptr);
	*head = copy_head;
	return (1);
}
