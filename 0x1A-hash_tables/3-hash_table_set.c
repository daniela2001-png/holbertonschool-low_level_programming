#include "hash_tables.h"

/**
 * hash_table_set - function that add element to ht
 * @key:key value
 * @ht:is the hash table
 * @value: value of the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *nodo = NULL;

	if (!key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = (char *)value;
			return (1);
		}
	}

	nodo = malloc(sizeof(hash_node_t));
	if (!nodo)
		return (0);
	nodo->key = (char *)(key);
	nodo->value = (char *)(value);
	nodo->next = ht->array[index];
	ht->array[index] = nodo;
	return (1);


}