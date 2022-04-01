#include "lists.h"

/**
 * free_listint - this function free the node
 *
 * @head: this param is the argument of acess
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
