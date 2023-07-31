#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list.
 * @head : Pointer to pointer.
 * @n : Int to be added.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);
	(*new_node).n = n;
	(*new_node).next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	while ((*ptr).next != NULL)
		ptr = (*ptr).next;
	(*ptr).next = new_node;
	return (new_node);
}
