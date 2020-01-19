#include "hash_tables.h"

/**
 *hash_table_set - a function that adds an element to the hash table
 *@ht: the hash table you want to add or update the key/value to
 *@key: key is the key and i can't be an empty string
 *@value: is the value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int a;

	if (key == NULL || ht == NULL)
	{
		return (0);
	}

	a = key_index((const unsigned char *)key, ht->size);

	if (ht->array[a] != NULL && strcmp(ht->array[a]->key, key) == 0)
	{
		ht->array[a]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[a];
	ht->array[a] = new_node;

	return (1);
}
