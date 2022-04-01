#include "lists.h"

/**
 * free_listint2 - the function free head and list
 *
 * @head : the doble pionter
 */

void free_listint2(listint_t **head)
{
	listint_t *before;

	before = *head;

	while (before != NULL)
	{
		before = (*head);
		if (before != NULL)
		{
			*head = (*head)->next;
			free(before);
		}
	}
	free(*head);
	head = NULL;
}
