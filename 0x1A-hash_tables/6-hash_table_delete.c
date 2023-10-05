#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht : The hash table.
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t **l_list, *head, *tmp;

	if (ht == NULL)
		return;
	l_list = (*ht).array;
	while (i < (*ht).size)
	{
		head = l_list[i];
		tmp = head;
		while (head != NULL)
		{
			tmp = (*head).next;
			free(head);
			head = tmp;
		}
		free(l_list[i]);
		i++;
	}
	free((*ht).array);
	free(ht);
}
