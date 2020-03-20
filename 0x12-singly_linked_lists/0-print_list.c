#include "lists.h"

/**
 * print_list - print the nodes data of my list
 * @h: pointer to struct
 * Return: lenght
 */

size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	for (; h != NULL; n++)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
	}
	return (n);
}
