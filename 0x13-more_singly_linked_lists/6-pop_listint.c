#include "lists.h"

<<<<<<< HEAD
int pop_listint(listint_t **head)
{
    listint_t *temp = head /* creating a temporary pointer to head*/
    int i;

    if (*head == 0)
    {
        printf("\nElement deleted is : %d\n",temp->n);
        *head = (*head)->next; /* traversal*/
        temp->next = NULL;
        free(temp);
    }
}
=======
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
>>>>>>> 2a2017026e6110e17b99c67eab4b7ac21f2b2b42
