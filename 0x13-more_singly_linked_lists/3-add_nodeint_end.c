#include "lists.h"

/**
 * add_nodeint_end - check the code for Holberton School students.
 * @head: start of my list
 * @n:value of each node
 * Return:the address of the new element ot null it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
return (*head);
}
