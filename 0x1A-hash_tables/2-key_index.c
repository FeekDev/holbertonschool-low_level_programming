#include "hash_tables.h"

/**
 * key_index - this  function that gives you the index of a key.
 *
 * @key: the value of string
 * @size: the value of arrai
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	return (index % size);
}
