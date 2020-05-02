#include "lists.h"
/**
 * add_dnodeint - function that add a new node at head
 * @head:node completed
 * @n:data of node
 * Return:the address of a newnode
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	*head = newnode;

	if (newnode->next != NULL)
		(newnode->next)->prev = newnode;/*add  a newnode */
	return (newnode);
}
