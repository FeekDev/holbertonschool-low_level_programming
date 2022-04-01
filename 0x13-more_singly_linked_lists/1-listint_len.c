#include "lists.h"

/**
 * listint_len - function pint the lenght
 *
 * @h: this param is the arguement
 * Return: size_t:
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
