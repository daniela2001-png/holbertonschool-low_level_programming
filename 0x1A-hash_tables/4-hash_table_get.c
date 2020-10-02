#include "hash_tables.h"
/**
 * hash_table_get - function that found a key from the value
 * @ht:hash table
 * @key:keyword
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	if (ht == NULL || key == NULL || ht->array == NULL ||
	ht->size == 0 || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}
