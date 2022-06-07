#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: is the hash table you want to look into
 * @key: the value of string
 * Return: char*
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *pair = NULL;

	index = key_index((unsigned char *)key, ht->size);

    /* Step through the bin, looking for our value. */
	pair = ht->array[index];
	while (pair != NULL && pair->key != NULL && strcmp(key, pair->key) > 0)
	{
		pair = pair->next;
	}

    /* Did we actually find anything? */
	if (pair == NULL || pair->key == NULL || strcmp(key, pair->key) != 0)
	{
		return (NULL);
	}
	else
	{
		return (pair->value);
	}
}
