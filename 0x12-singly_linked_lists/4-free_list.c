#include "lists.h"

/**
 * free_list - check the code for Holberton School students.
 * @head: pointer to list
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	if (!head)
		return;

	free_list(head->next);

	free(head->str);

	free(head);
}
