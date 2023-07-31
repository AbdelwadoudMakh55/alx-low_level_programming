#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - Find the nth node of a listint_t list.
 * @head : Pointer to listint_t linked list.
 * @index : Index of nth node (int).
 * Return: Pointer to nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (0);
	while (i != index && (*ptr).next != NULL)
	{
		ptr = (*ptr).next;
		i++;
	}
	if (i != index)
		return (0);
	return (ptr);
}
