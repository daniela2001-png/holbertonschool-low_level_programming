#include "lists.h"

/**
 * listint_len - show the quality of nodes
 * @h:is a pointer
 * Return: quality of node
 */

size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
