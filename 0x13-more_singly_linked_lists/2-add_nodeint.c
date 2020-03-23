#include "lists.h"

/**
 * add_nodeint - check the code for Holberton School students.
 * @head: start of my node
 * @n:is each value of nodes
 * Return:the address of the new element pointer to head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;

	if (*head != NULL)
	{
		newnode->next = *head;
	}
	if (*head == NULL)
	{
		newnode->next = NULL;
	}
	*head = newnode;
return (*head);
}
