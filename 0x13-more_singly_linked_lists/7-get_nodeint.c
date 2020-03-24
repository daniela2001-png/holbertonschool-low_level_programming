#include "lists.h"

/**
 * get_nodeint_at_index - check the code for Holberton School students.
 * @head:pointer to list
 * @index:integer than recurrent my list
 * Return:index n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;

		if (count == index)
			break;

	}
	return (tmp);
}
