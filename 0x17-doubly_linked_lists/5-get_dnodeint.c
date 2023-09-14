#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head : Pointer to head of dlistint_t list.
 * @index : Index of node.
 * Return: Pointer to nth node or NULL if it doesnt exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL && i < index)
	{
		head = (*head).next;
		i++;
	}
	return (head);
}
