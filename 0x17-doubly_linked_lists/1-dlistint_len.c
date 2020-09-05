#include "lists.h"
/**
 * dlistint_len - function that return the number of nodes in a list
 * @h:pointer type struct to list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* primero creo un contador tipo: entero >= 0*/
	/*ya que la funcion es de tipo size_t*/
	unsigned int number_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
