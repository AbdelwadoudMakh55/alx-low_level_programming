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
	
	temp = head;
	while (temp != NULL)
	{
		temp = (*temp).next;
		if ((*head).str != NULL)
			free((*head).str);
		free(head);
		head = temp;
	}
}
