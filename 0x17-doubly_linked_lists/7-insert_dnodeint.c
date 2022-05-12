#include "lists.h"

/**
 * insert_dnodeint_at_index - the function
 *
 * @h: the pointer
 * @idx: the node wanted
 * @n: data
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* allow memory*/
	dlistint_t *front, *back, *new_node = new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	/* in case of fail*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	if ((*h) == NULL)
	{
		return (NULL);
	}
	/* pointer head*/
	front = (*h);
	/* traversal and condition*/
	while (i <= idx)
	{
		if (i == idx)
		{
			new_node->n = n;
			new_node->prev = back;
			new_node->next = front;
			/* connect the new node*/
			back->next = new_node;
			front->prev = new_node;
		}
		front = front->next;
		back = front->prev;
		i++;
	}
	return (new_node);
}
