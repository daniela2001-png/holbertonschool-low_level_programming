#include "lists.h"

/**
 * print_listint - print the elemets of list
 * @h:is a pointer to struct
 * Return: elements of list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
