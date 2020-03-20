#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 * @h:pointer to struct
 * Return: quality of digits
 */

size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	for (; h != NULL; n++)
	{
		h = h->next;

	}
	return (n);
}
