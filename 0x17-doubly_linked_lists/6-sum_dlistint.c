#include "lists.h"

/**
 * sum_dlistint - function that return sum of the nodes
 * @head:head to list
 * Return: the sum of nodes or zero if head is null
 */


int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int suma = 0;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		suma += ptr->n;
		ptr = ptr->next;
	}
	return (suma);
}