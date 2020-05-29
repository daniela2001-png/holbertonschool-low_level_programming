#include "hash_tables.h"
/**
 * hash_table_set - function that adds a key/value to ht
 * @ht:hash table to update o adds
 * @key:keyword
 * @value:value to key
 * Return:1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node_added;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value); /*free the value to change*/
			/*for the new value*/
			ht->array[index]->value = strdup(value);/*Asignamos el*/
			/*nuevo valor de la akey*/
			if (!ht->array[index]->value)
				return (0);
			return (1);
		}
	node_added = malloc(sizeof(hash_node_t));
	if (!node_added)
		return (0);
	node_added->key = strdup(key); /*I done a strdup cuz*/
	/*the key(left) do not have space*/
	node_added->value = strdup(value); /*I done a strdup cuz*/
	/*the value(left) do not have space*/

	if (node_added->key == NULL || node_added->value == NULL)
	{
		free(node_added->value);
		free(node_added->key);
		return (0);
	}
	node_added->next = ht->array[index]; /*apuntamos donde vamos*/
	/*a colocar el nodo*/
	ht->array[index] = node_added;/*colocamos el newnode*/

	return (1);

}
