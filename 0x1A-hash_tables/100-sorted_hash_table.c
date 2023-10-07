#include "hash_tables.h"
/**
 * insert_node : inserts a number into a sorted singly linked list.
 * @hash_t : Pointer to hash function.
 * @value : Value of key.
 * @new : New node.
 * Return: 1 Success, 0 Failure.
 */
int insert_node(shash_table_t *hash_t, const char *value, shash_node_t *new_node)
{
	shash_node_t *current, *tmp, *head, *tail;

	head = (*hash_t).shead;
	tail = (*hash_t).stail;
	current = head;
	if (current == NULL)
	{
		head = new_node;
		(*head).snext = tail;
		(*head).sprev = NULL;
		return (1);
	}
	if (strcmp(value, (*current).value) < 0)
	{
		head = new_node;
		(*new_node).snext = current;
		(*new_node).sprev = NULL;
		(*current).sprev = head;
		return (1);
	}
	while (current != NULL)
	{
		if (strcmp(value, (*current).value) > 0)
		{
			tmp = current;
			current = (*current).snext;
		}
		else
		{
			(*tmp).snext = new_node;
			(*new_node).sprev = tmp;
			(*new_node).snext = current;
			(*current).sprev = new_node;
			return (1);
		}
	}
	if (current == NULL)
	{
		(*tmp).snext = new_node;
		(*new_node).snext = NULL;
		tail = new_node;
	}
	return (1);
}
/**
 * shash_table_create - creates a hash table.
 * @size : Size of hash table.
 * Return: Pointer to shash_table_t or NULL if it failed.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_shash_t;
	shash_node_t **array;

	new_shash_t = malloc(sizeof(shash_table_t));
	array = malloc(sizeof(shash_node_t *) * size);
	if (new_shash_t == NULL)
		return (NULL);
	if (array == NULL)
		return (NULL);
	(*new_shash_t).size = size;
	(*new_shash_t).array = array;
	(*new_shash_t).shead = NULL;
	(*new_shash_t).stail = NULL;
	return (new_shash_t);
}
/**
 * shash_table_set - a function that adds an element to the sorted hash table.
 * @ht : The hash table.
 * @key : The key.
 * @value :The value to be stored.
 * Return: 1 Success, 0 Failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_pair, **l_list;
	char *dupl_key, *dupl_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (strlen(key) == 0 || (*ht).size == 0)
		return (0);
	index = key_index((const unsigned char *)key, (*ht).size);
	l_list = (*ht).array;
	if (l_list == NULL)
		return (0);
	new_pair = malloc(sizeof(shash_node_t));
	if (new_pair == NULL)
		return (0);
	dupl_key = strdup(key);
	(*new_pair).key = dupl_key;
	dupl_value = strdup(value);
	(*new_pair).value = dupl_value;
	(*new_pair).next = l_list[index];
	l_list[index] = new_pair;
	return (insert_node(ht, value, new_pair));
}
/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht : The hash table.
 * @key : The key.
 * Return: Value associated to key or NULL if not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t **l_list;
	shash_node_t *head;
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
/**
 * shash_table_print - prints a hash table.
 * @ht : The hash table.
 * Return: Void.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head;
	int i_track = 0;

	if (ht == NULL)
		return;
	head = (*ht).shead;
	printf("{");
	while (head != NULL)
	{
		if (i_track > 0)
			printf(", \'%s\': \'%s\'", (*head).key, (*head).value);
		else
			printf("\'%s\': \'%s\'", (*head).key, (*head).value);
		i_track += 1;
		head = (*head).snext;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table.
 * @ht : The hash table.
 * Return: Void.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t **l_list, *head, *tmp;

	if (ht == NULL)
		return;
	l_list = (*ht).array;
	while (i < (*ht).size)
	{
		head = l_list[i];
		tmp = head;
		while (tmp != NULL)
		{
			tmp = (*tmp).next;
			free((*head).value);
			free((*head).key);
			free(head);
			head = tmp;
		}
		i++;
	}
	free((*ht).array);
	free((*ht).shead);
	free((*ht).stail);
	free(ht);
}
