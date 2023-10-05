#include "hash_tables.h"
/**
 * key_index -  a function that gives you the index of a key.
 * @key : The key.
 * @size : Size of the hash_table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
