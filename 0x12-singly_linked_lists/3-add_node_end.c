#include "lists.h"
/**
 * add_node_end - created a tail node
 * @head: pointer to my list link
 * @str: pointer to string in main
 * Return: pointer head
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newnode, *tmp;
	unsigned int size = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	while (str[size])
	{
		size++;
	}
	newnode->len = size;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}

	return (*head);
}
