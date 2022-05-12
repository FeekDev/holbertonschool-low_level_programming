#include "lists.h"

/**
 * sum_dlistint - the function
 *
 * @head: pointer
 * Return: Sum
 */

int sum_dlistint(dlistint_t *head)
{
	/* allow memory*/
	dlistint_t *temp;
	int sum = 0;
	/* pointer in head*/
	temp = head;
	/* traversal and sum*/
	while (temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}
return (sum);
}
