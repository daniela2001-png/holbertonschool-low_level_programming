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

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			if (!ht->array[index]->value)
				return (0);
			return (1);
		}
	}

	nodo = malloc(sizeof(hash_node_t));
	if (!nodo)
		return (0);
	nodo->key = strdup(key);
	nodo->value = strdup(value);
	if (!nodo->key || !nodo->value)
	{
		free(nodo->value);
		free(nodo->key);
		return (0);
	}

	nodo->next = ht->array[index];
	ht->array[index] = nodo;
	return (1);

}
