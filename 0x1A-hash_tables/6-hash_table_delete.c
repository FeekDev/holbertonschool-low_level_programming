#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *next = NULL;

	for (; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
