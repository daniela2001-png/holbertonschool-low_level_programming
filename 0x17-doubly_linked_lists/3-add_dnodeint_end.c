#include "lists.h"

/**
 * add_dnodeint_end - function that add a newnode to the tail
 * @head:node complete
 * @n:date of nodo
 * Return:the address of a newnode
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	dlistint_t *last = *head;

	newnode->n = n; /* Put the date int n */
	newnode->next = NULL; /* This new node is going to be the last node, so */
	/* make next of it as NULL */
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		/* Change the next of last node */
		last->next = newnode;
		/* Make last node as previous of new node */
		newnode->prev = last;
		last = newnode;
	}
	/* the address of the new element */
	return (*head);
}
