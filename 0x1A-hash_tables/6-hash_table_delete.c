#include "hash_tables.h"
/**
* hash_table_delete - function thta frees a hash table
* @ht:hash table to deleted
* Return:void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr_next;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			ptr_next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = ptr_next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
