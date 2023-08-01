#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
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
 * reverse_listint -  reverses a listint_t linked list.
 * @head : Pointer to listint_t head.
 * Return: Pointer to head of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL;

	if (head == NULL || *head == NULL)
		return (0);
	if (listint_len(*head) == 1)
		return (*head);
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
