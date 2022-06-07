#include "hash_tables.h"

/**
 * ht_newpair - Create a key-value pair.
 *
 * @key: the value of string
 * @value: the string of key
 * Return: hash_node_t*
 */
hash_node_t *ht_newpair(const char *key, const char *value)
{
	hash_node_t *newpair = NULL;

    /* Create a key-value pair. */
	newpair = malloc(sizeof(hash_node_t));
	if (!newpair)
		return (NULL);

	newpair->key = strdup(key);
	if (!newpair->key)
	{
		free(newpair);
		return (NULL);
	}

	newpair->value = strdup(value);
	if (!newpair->value)
	{
		free(newpair->key);
		free(newpair);
		return (NULL);
	}
	newpair->next = NULL;
	return (newpair);
}

/**
 * hash_table_set -  function that adds an element to the hash table
 *
 * @ht: is the hash table
 * @key: the value of string
 * @value: the string
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp = NULL, *node = NULL;
	unsigned long int index = 0;
	char *new_value = NULL;

	if (!ht || !key || !value || strlen(key) == 0 || ht->size == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);

			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	node = ht_newpair(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
