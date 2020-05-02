#include "lists.h"
/**
 * free_dlistint - function that free a node completed
 * @head:node completed
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	free_dlistint(head->next);
	free(head);
}
