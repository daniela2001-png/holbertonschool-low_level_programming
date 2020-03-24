#include "lists.h"
/**
 * pop_listint - check the code for Holberton School students.
 * @head: pointer to list
 * Return:0 if is empty
 */
int pop_listint(listint_t **head)
{
	int numero = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	if (*head)
	{
		tmp = *head;
		numero = (*head)->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (numero);
}
