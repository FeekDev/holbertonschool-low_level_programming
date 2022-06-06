#include "hash_tables.h"

/**
 * hash_table_create - the function creates a hash table
 * @size: passed argument size
 * Return: the pointer to newly created hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ha_table = NULL;
	unsigned long int i;
    /*Allocate the table itself.*/
	ha_table = malloc(sizeof(hash_table_t));
	if (!ha_table)
		return (NULL);
    ha_table->size = size;
    /* Allocate pointers to the head nodes. */
	ha_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!ha_table->array)
	{
		free(ha_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
        ha_table->array[i] = NULL;
    return (ha_table);
}
