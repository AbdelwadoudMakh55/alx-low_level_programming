#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht : The hash table.
 * @key : The key.
 * @value :The value to be stored.
 * Return: 1 Success, 0 Failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_pair, *l_list;

	index = key_index((const unsigned char *)key, (*ht).size);
	l_list = (*ht).array[index];
	new_pair = malloc(sizeof(hash_node_t));
	if (new_pair == NULL)
		return (0);
	if (l_list == NULL)
		l_list = new_pair;
	(*new_pair).key = (char *)key;
	(*new_pair).value = (char *)value;
	(*new_pair).next = NULL;
	return (1);
}
