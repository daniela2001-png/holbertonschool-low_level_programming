#include "hash_tables.h"

/**
 * hash_table_get - return the value from the key
 * @ht: is the hash table
 * @key: is the key of the array
 * Return: Returns the value associated with the element, or NULL if key couldn’t be found 
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	//hash_node_t *ptr;
	unsigned long int index;

	if (ht == NULL || key == NULL || ht->array == NULL ||
	ht->size == 0 || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	// ptr = ht->array[index];
	if (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
	}
	return (NULL);

}
