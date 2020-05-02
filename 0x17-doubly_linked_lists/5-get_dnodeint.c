#include "lists.h"
/**
 * get_dnodeint_at_index - function that get a index in x
 * @head:double list
 * @index:index of a list
 * Return:zero
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *posicion_actual = head;
	unsigned int counter = 0;

	while (posicion_actual != NULL)/* RUN THROUGH OF LIST */
	{
		if (counter == index)
			return (posicion_actual);/* RETURN OF NODE WITH THIS INDEX */

		counter++;/* Iterate to the end or until found a index equal */
		posicion_actual = posicion_actual->next;/* pass to the next node */
	}
	return (0);
}
