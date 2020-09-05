#include "lists.h"
/**
 * print_dlistint - function that return the number of nodes in a list
 * @h:pointer type struct to list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	/* primero creo un contador tipo: entero >= 0*/
	/*ya que la funcion es de tipo size_t*/
	unsigned int number_of_nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
