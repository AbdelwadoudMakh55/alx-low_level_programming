#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - frees a list_t list.
 * @head : Pointer to list_t list.
 * Return: Void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = (*head).next;
		if ((*head).str != NULL)
			free((*head).str);
		if ((*head).next != NULL)
			free((*head).next);
		free(head);
		head = temp;
	}
}
