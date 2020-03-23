#include "lists.h"

/**
 * free_listint - check the code for Holberton School students.
 * @head:pointer to my linked list
 * Return: Always 0.
 */

void free_listint(listint_t *head)
{
	if (!head)
		return;

	free_listint(head->next);
		free(head);
}
