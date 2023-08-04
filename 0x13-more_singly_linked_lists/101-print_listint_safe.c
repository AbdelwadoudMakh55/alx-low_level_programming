#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints all the elements of a listint_t list.
 * @head : listint_t list.
 * Return: Number of nodes (size_t).
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, (*head).n);
		n_nodes++;
		head = (*head).next;
	}
	return (n_nodes);
}
