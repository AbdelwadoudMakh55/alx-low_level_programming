#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - Deeletes the head node if a listint_t list.
 * @head : Pointer to head of listint_t list.
 * Return: Head nodes's data (int).
 */
int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = *head;
	num = (*ptr).n;
	ptr = (*ptr).next;
	free(*head);
	*head = ptr;
	return (num);
}
