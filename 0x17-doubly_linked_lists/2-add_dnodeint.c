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

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (NULL);
	}
	else
	{
		(*head)->prev = newnode;/* creamos el enlace entre head y newnode */
		newnode->next = *head;/* asignamos */
		*head = newnode; /* agregamos exitosamente nuestro nodo */
	}
	return (*head);
}
