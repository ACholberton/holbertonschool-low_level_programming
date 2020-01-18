#include "hash_tables.h"

/**
 *hash_table_create - creates an empty hash table
 *@size: is the size of the array
 *Return: a pointer to the new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = NULL;
	unsigned long int a = 0;

	hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
	{
		return (NULL);
	}

	hash->array = malloc(sizeof(hash_node_t *) * size);

	if (hash->array == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		hash->array[a] = NULL;
	}
	hash->size = size;
	return (hash);
}
