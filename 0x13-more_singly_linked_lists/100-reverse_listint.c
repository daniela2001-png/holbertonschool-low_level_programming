#include "lists.h"

/**
 * reverse_listint - function that reverse a list
 * @head:doble pointer to struct
 * Return:pointer in head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cp;
	listint_t *tmp;

	if (*head == NULL)
		return (NULL);

	cp = *head;
	tmp = NULL;

	for (; *head != NULL ;)
	{
		cp = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = cp;
	}

	*head = tmp;
	return (*head);
}
