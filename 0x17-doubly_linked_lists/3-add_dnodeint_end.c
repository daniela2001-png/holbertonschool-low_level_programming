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
		return (NULL);

	if (nuevo != NULL)
	{
		nuevo->n = n;
		nuevo->next = NULL;
		nuevo->prev = NULL;
	}
	return (nuevo);
}

/**
 * add_dnodeint_end - function that create a node at the end
 * @n:node to create
 * @head:head of a list
 * Return: the node if was sucess or null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = NULL;
	dlistint_t *nuevo_node = NULL;

	aux = *head;
	nuevo_node = Create_node(n);

	if (*head == NULL)
	{
		nuevo_node->prev = NULL;
		*head = nuevo_node;
		return (nuevo_node);
	}
	/*si se creo el nodo con exito*/
	if (nuevo_node != NULL)
	{
		while (aux->next != NULL)
		{
			aux = aux->next; /*aqui nos ubicamos en nuestro ultimo elemnto de la lista*/
		}
		nuevo_node->prev = aux;
		aux->next = nuevo_node;
		return (nuevo_node);
	}
	return (NULL);
}
