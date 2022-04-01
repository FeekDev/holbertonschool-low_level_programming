#include "lists.h"

/**
 * add_nodeint - function add at begining the node
 *
 * @head: the pointer null
 * @n: the dta type int
 * Return: new nodo
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t)); /*create node*/

	if (new_node != NULL)
	{
		new_node->n = n; /*asign the date*/
		new_node->next = *head; /*asign th adress*/

		*head = new_node; /*change the head*/

		return (new_node);
	}

	return (NULL);
}
