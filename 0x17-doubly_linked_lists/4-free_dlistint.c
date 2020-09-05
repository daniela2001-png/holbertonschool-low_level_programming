#include "lists.h"

/**
 * free_dlistint - function that free a list
 * @head: pointer to list
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	free_dlistint(head->next);
	free(head);
}
