#include "lists.h"
/**
 * sum_dlistint - function thta return a sum of a list
 * @head:list
 * Return:sum
 */
int sum_dlistint(dlistint_t *head)
{
	int suma = 0;

	while (head != NULL)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
