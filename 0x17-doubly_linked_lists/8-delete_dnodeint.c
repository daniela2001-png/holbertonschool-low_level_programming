#include "lists.h"
/**
 * delete_dnodeint_at_index - Function thata delete a node in indx
 * @head:list double
 * @index:number of data to delete
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp; /* temp pointer to node main(head) */
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next == NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}

	i = 0;

	while (i < index)
	{
		if (temp->next == NULL)
			return (-1);
/* here head to the next node where the index is for change */
		temp = temp->next;
		i++; /*run between of each node*/
	}
	temp->prev->next = temp->next;/* change the links between of nodes*/
	if (temp->next != NULL)
/* here the addresses of our new links between the nodes already coincide*/
		temp->next->prev = temp->prev;
	free(temp);/*delete a node*/
	return (1);
}
