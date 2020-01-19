#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table
 *@ht: is the hash table to be printed
 *Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a = 0;
	hash_node_t *tmp;
	char on = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		for (tmp = ht->array[a]; tmp; tmp = tmp->next)
		{
			if (on == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp->key, tmp->value);
			on = 1;
		}
	}
	printf("}\n");
}
