#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: sizeof the table
 * Return: a pointer to a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* 1ro creo un puntero de tipo struct hash_table_t */
	/* que sera el que retornare */
	hash_table_t *table = NULL;
	hash_node_t *size_node = NULL; /* puntero = 8 bytes */


	table = malloc(sizeof(*table)); /* aqui asigno los 16 bytes*/
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(size_node) * size); /* 8 * 1024 bytes */
	/* si el malloc falla retorno NULL*/
	if (table->array == NULL)
		return (NULL);
	/* return the pointer */
	return (table);
}
