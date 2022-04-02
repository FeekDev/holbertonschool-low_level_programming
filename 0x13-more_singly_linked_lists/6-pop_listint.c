#include "lists.h"

/**
 * pop_listint - this the function delete
 * @head: the param double pointer
 * Return: return int
 **/

int pop_listint(listint_t **head)
{
	listint_t *before = (listint_t *) malloc(sizeof(listint_t));

	listint_t *count;

	int n = 0;

	if (head != NULL)
	{
		for (count = 0; *head < count - 1; count++)
		{
			before = *head;
			n = (*head)->n;
			*head = (*head)->next;
			free(before);
		}
		return (n);
	}

	else
	{
		return ('\0');
	}
}
