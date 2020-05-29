#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht:hash table
 * Return:Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int j;
	hash_node_t *ptr = NULL;
	char *token = "";

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (j = 0; j < ht->size; j++)
	{
		ptr = ht->array[j];
		while (ptr != NULL)
		{
			printf("%s'%s': '%s'", token, ptr->key, ptr->value);
			token = ", ";
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
