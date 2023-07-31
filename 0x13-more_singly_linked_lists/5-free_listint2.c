#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - frees a listint_t list.
 * @head : Pointer to listint_t list.
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = (*temp).next;
		free(*head);
		*head = temp;
	}
}
