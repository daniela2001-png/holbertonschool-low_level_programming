#include "lists.h"
/**
 * print_dlistint - type of data that return a integer
 * @h:pointer to node
 * Return: x number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /* print the int data (n) */
		h = h->next; /* run list */
		x++;
	}
	return (x);
}
