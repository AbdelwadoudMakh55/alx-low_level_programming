#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size : Size of hash table.
 * Return: Pointer to hash_table_t or NULL if it failed.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_t = NULL;
	hash_node_t **array;

	new_hash_t = malloc(sizeof(hash_table_t));
	array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash_t == NULL)
		return (NULL);
	if (array == NULL)
		return (NULL);
	(*new_hash_t).size = size;
	(*new_hash_t).array = array;
	return (new_hash_t);
}
