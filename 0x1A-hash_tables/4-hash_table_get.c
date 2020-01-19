#include "hash_tables.h"

/**
 *hash_table_get - function that retrieves a value associated with a key
 *@ht: is the hash table you want to look into
 *@key: is the key
 *Return: the value associated with the element or NULL if key couldn’t be
 * found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i, j;
	hash_node_t *tmp;

	if (ht == NULL)
	{
		return (NULL);
	}

	i = key_index((const unsigned char *)key, ht->size);

	tmp = (ht->array[i]);

	if (tmp == NULL)
	{
		return (NULL);
	}

	for (j = 0; tmp != NULL; j++)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
