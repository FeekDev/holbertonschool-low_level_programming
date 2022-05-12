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
	dlistint_t *temp;
	unsigned int i = 0;
	/* in case node doesn't exist */
	if (head == NULL)
	{
		return (NULL);
	}
	/* point in head*/
	temp = (head);
	/* traversal and conditional*/
	while (i != index)
	{
		if (head == NULL)
	{
		return (NULL);
	}
	temp = temp->next;
	i++;
	}
	return (temp);
}
