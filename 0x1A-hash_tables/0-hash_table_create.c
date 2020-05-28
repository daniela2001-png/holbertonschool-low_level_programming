#include "hash_tables.h"

/**
 * hash_table_create - function hash 
 * @size:size of a array
 * Return:a pointer to a new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *table;
        hash_node_t *node;
        
        table = malloc(sizeof(*table));
        if (table == NULL)
                return (NULL);
        table->size = size;
        table->array = malloc(sizeof(node) * size);
        if (table->array == NULL)
                return (NULL);
        return (table);
}
