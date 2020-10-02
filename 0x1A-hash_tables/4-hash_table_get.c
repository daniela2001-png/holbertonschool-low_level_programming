#include "hash_tables.h"

/**
 * hash_table_get - return the value from the key
 * @ht: is the hash table
 * @key: is the key of the array
 * Return: Returns the value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *my_ptr = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || ht->array == NULL ||
	ht->size == 0 || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	my_ptr = ht->array[index];
	while (my_ptr != NULL)
	{
		if (strcmp(my_ptr->key, key) == 0)
			return (my_ptr->value);
	}
	return (NULL);
}
