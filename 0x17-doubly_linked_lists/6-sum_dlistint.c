#include "lists.h"
/**
 * sum_dlistint - function thta return a sum of a list
 * @head:list
 * Return:sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux;
	int suma = 0;

	aux = head;

	while (aux != NULL)
	{
		suma += aux->n;
		aux = aux->next;
	}
	return (suma);
}
