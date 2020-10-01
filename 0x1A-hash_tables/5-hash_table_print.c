#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: teh hash table to print
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr = NULL;
	unsigned long int idx = 0;
	char *final = "";

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{	
		ptr = ht->array[idx];
		while(ptr != NULL)
		{
			printf("%s'%s': '%s'", final, ptr->key, ptr->value);
			final = ", ";
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
