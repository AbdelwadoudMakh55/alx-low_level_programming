#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees a dlistint_t list.
 * @head : Pointer to head of dlistint_t list.
 * Return: Void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		current = (*current).next;
		free(head);
		head = current;
	}
}
