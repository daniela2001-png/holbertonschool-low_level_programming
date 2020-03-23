#include "lists.h"
/**
 * free_listint2 - check the code for Holberton School students.
 * @head: pointer to list
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;
	if (*head)
	{
		free_listint2(&((*head)->next));
		free(*head);
		*head = NULL;
	}
}
