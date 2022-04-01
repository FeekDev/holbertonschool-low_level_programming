#include "lists.h"

/**
 * add_nodeint_end - the function add node end
 *
 * @head: the param node
 * @n: the param date
 * Return: listint_t*
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *end_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /*if th linked is empty change head*/
	{
		*head = new_node;
		return (new_node);
	}

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}

	end_node->next = new_node;
	return (new_node);
}
