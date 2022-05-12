#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at index object
 *
 * @head: pointer
 * @index: wanted node
 * Return: node found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* allow memory and variable*/
	dlistint_t *temp, *found;
	unsigned int i;
	/* point in head*/
	temp = head;
	/* traversal and conditional*/
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
		if (i == index)
		{
			found = temp;
		}
	}
return (found);
}
