#include "lists.h"

/**
 * delete_nodeint_at_index - check the code for Holberton School students.
 * @head: pointer to struct
 * @index: number
 * Return: delete node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *actual = *head;
	listint_t *prev;
	unsigned int j;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = actual->next;
		free(actual);
		return (1);
	}
	j = 0;
	while (j != index)
	{
		prev = actual;
		actual = actual->next;
		j++;
		if (actual == NULL)
			return (-1);
	}
	prev->next = actual->next;
	free(actual);
	return (1);
}
