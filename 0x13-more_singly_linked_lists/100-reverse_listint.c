#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head : Pointer to listint_t head.
 * Return: Pointer to head of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next;

	if (head == NULL || *head == NULL)
		return (0);
	while (*head != NULL)
	{
		next = (**head).next;
		(**head).next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
