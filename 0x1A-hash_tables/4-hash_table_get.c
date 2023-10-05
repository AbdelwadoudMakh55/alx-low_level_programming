#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht : The hash table.
 * @key : The key.
 * Return: Value associated to key or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **l_list;
	hash_node_t *head;
	char *value_of_key;

	if (ht == NULL || key == NULL)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, (*ht).size);
	l_list = (*ht).array;
	head = l_list[index];
	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (strcmp((char *)key, (*head).key) == 0)
		{
			value_of_key = (*head).value;
			return (value_of_key);
		}
		head = (*head).next;
	}
	return (NULL);
}
