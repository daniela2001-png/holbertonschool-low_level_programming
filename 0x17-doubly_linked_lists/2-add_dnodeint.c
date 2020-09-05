#include "lists.h"

/**
 * Create_node - function that create a node
 * @n:node to create
 * Return: the node if was sucess or null if failed
 */

dlistint_t *Create_node(const int n)
{
	dlistint_t *nuevo = NULL;

	nuevo = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (nuevo == NULL)
	{
		free(nuevo);
		return (NULL);
	}

	if (nuevo != NULL)
	{
		nuevo->n = n;
		nuevo->next = NULL;
		nuevo->prev = NULL;
	}
	return (nuevo);
}

/**
 * add_dnodeint - function that return a node if was insert sucess!
 * @n:node to add
 * @head:head of a list
 * Return: the node if was sucess or null if failed
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = Create_node(n);
	if (node != NULL)
	{
		node->prev = NULL;
		node->next = *head;
		if (*head != NULL)
			(*head)->prev = node;
		*head = node;
		return (node);
	}
	return (NULL);
}