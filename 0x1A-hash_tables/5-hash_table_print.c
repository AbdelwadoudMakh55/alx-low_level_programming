#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht : The hash table.
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t **l_list, *head;
	int i_track = 0;

	if (ht == NULL)
		return;
	l_list = (*ht).array;
	printf("{");
	while (i < (*ht).size)
	{
		head = l_list[i];
		while (head != NULL)
		{
			if (i_track > 0)
				printf(", \'%s\': \'%s\'", (*head).key, (*head).value);
			else
				printf("\'%s\': \'%s\'", (*head).key, (*head).value);
			i_track += 1;
			if ((*head).next != NULL)
				printf(", ");
			head = (*head).next;
		}
		i++;
	}
	printf("}\n");
}
