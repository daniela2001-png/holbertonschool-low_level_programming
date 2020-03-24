#include "lists.h"
/**
 * sum_listint - check the code for Holberton School students.
 * @head: pointer to struct
 * Return: add
 */
int sum_listint(listint_t *head)
{
	int suma = 0;

	if (head)
	{
		while (head)
		{

			suma = suma + head->n;
			head = head->next;


		}
		return (suma);
	}
	else
		return (0);
}
