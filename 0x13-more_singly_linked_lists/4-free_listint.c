#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - frees a listint_t list.
 * @head : Pointer to listint_t list.
 * Return: Void.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = (*temp).next;
		if ((*head).str != NULL)
			free((*head).n);
		free(head);
		head = temp;
	}
}
