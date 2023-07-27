#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - return the length of a string.
 * @s : pointer to a string.
 * Return: len; length of string str.
 */
int _strlen(const char *s)
{
	int i = 0;
	int len = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head : Pointer to pointer.
 * @str : String to be added.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *ptr;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (0);
	(*new_node).str = strdup(str);
	(*new_node).len = _strlen(str);
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
