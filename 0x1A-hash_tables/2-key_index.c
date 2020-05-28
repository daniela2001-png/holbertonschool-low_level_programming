#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key:keyword given
 * @size:size of table hash
 * Return:the index of the value of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		unsigned long int index;
		unsigned long int hash;

		hash = hash_djb2(key);
		index = hash % size;
		return (index);
}
