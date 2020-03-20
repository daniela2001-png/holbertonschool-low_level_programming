#include "lists.h"

/**
 * add_node - check the code for Holberton School students.
 * @head: address of memory each node
 * @str: string to print
 * Return: head in the first position on the linked list
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *newnode;
	unsigned int size = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);

	while (str(size))
	{
		size++;
	}
	newnode->len = size;
	if (*head != NULL)
		newnode->next = *head;
	if (*head == NULL)
		newnode->next = NULL;
	*head = newnode;
	return (*head);
}
