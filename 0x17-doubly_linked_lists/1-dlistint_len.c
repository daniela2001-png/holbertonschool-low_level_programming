#include "lists.h"
/**
 * dlistint_len - type of data that return a integer
 * @h:pointer to a node
 * Return:number of nodes(x)
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
