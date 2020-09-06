#include "lists.h"

/**
 * delete_dnodeint_at_index - function that delete a node in teh index position
 * @index:index to return
 * @head:head of a list
 * Return: the new list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	/*If head needs to be removed*/
	if (index == 0)
	{
		*head = ptr->next;   /*Change head*/
		free(ptr);          /* free old head*/
		return (1);
	}
	/* Find previous node of the node to be deleted*/
	for (unsigned int i = 0; ptr != NULL && i < index - 1; i++)
		ptr = ptr->next;

	/* If position is more than number of nodes*/
	if (ptr == NULL || ptr->next == NULL)
		return (-1);
	/* Node temp->next is the node to be deleted */
	/* Store pointer to the next of node to be deleted*/
	dlistint_t *next = ptr->next->next;

	/* Unlink the node from linked list*/
	free(ptr->next);

	ptr->next = next;
	return (-1);
}
