#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head : Pointer to head of dlistint_t.
 * Return: Sum of the data of all nodes or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
