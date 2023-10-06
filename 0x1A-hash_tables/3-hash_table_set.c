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
	hash_node_t *new_pair, **l_list;
	char *dupl_key, *dupl_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0 || (*ht).size == 0)
		return (0);
	index = key_index((const unsigned char *)key, (*ht).size);
	l_list = (*ht).array;
	if (l_list == NULL)
		return (0);
	new_pair = malloc(sizeof(hash_node_t));
	if (new_pair == NULL)
		return (0);
	dupl_key = strdup(key);
	(*new_pair).key = dupl_key;
	dupl_value = strdup(value);
	(*new_pair).value = dupl_value;
	(*new_pair).next = l_list[index];
	l_list[index] = new_pair;
	return (1);
}
