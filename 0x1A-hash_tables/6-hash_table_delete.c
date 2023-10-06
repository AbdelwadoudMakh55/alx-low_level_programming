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
	/*if ((*ht).size == 0)
	{
		free((*ht).array);
		free(ht);
		return;
	}*/
	l_list = (*ht).array;
	/*if (l_list == NULL)
	{
		free(ht);
		return;
	}*/
	while (i < (*ht).size)
	{
		head = l_list[i];
		tmp = head;
		while (tmp != NULL)
		{
			tmp = (*tmp).next;
			/*if ((*head).key != NULL)
				free((*head).key);*/
			/*if ((*head).value != NULL)
				free((*head).value);*/
			free(head);
			head = tmp;
		}
		i++;
	}
	free(l_list);
	free(ht);
}
