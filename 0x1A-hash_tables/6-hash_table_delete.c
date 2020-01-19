#include "hash_tables.h"

/**
 *hash_table_delete - deletes a hash table
 *@ht: is the hash table
 *Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a = 0;
	hash_node_t *tmp, *tmp2;

	if (ht == NULL)
	{
		return;
	}

	for (a = 0; a < ht->size; a++)
	{
		for (tmp = ht->array[a]; tmp; tmp = tmp2)
		{
			tmp2 = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
