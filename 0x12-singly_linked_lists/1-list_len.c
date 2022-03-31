#include "lists.h"

/**
 * list_len - the function
 * @h: the pointer
 * Return: return numbers of nodes.
 **/

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
