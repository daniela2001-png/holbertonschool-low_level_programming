#include "lists.h"

/**
 * get_dnodeint_at_index - function that return the node in teh index position
 * @index:index to return
 * @head:head of a list
 * Return: the node index or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = NULL;

	ptr = head;
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	while (ptr != NULL)
	{
		if (x == index)
			return (ptr);
		ptr = ptr->next;
		x++;
	}
	return (0);
}