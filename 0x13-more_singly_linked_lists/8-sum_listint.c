#include "lists.h"
#include <stdio.h>
/**
 *  sum_listint - sum of all the data (n) of a listint_t linked list.
 *  @head : Pointer to listint_t list.
 *  Return: Sum (int).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
