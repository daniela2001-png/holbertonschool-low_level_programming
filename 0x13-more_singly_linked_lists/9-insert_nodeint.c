#include "lists.h"

/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 * @head:pointer to struct
 * @idx: index given
 * @n: each value of nodes
 * Return: nuul in case it failed or in success exit return address of memory
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *newnode;
	unsigned int counter = 0;

	if (*head == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		tmp = *head;
		while (tmp != NULL)
		{
			if (counter == (idx - 1))
			{
				newnode->next = tmp->next;
				tmp->next = newnode;
				return (newnode);
			}
			tmp = tmp->next;
			counter++;
		}

		return (NULL);
	}
}
