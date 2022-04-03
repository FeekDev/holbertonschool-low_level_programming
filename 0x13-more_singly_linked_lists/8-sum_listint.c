#include "lists.h"

/**
 * sum_listint - this return the sum all the data n
 * @head: the pointer
 * Return: return de sum
 **/

int sum_listint(listint_t *head)
{
	listint_t *current;
	int count = 0;

	int sum = 0;

	current = head;

	if (head != NULL)
	{
		while (current != NULL)
		{
			sum = current->n;
			count = sum + count;
			current = current->next;
		}
		return (count);
	}
	return (0);
}
