#include "lists.h"

/**
 * pop_listint - this the function delete
 * @head: the param double pointer
 * Return: return int
 **/

int pop_listint(listint_t **head)
{
	listint_t *before;

	int n = 0;

	if (*head != NULL)
	{
		before = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(before);
	}
	return (n);
}
