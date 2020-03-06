#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - newsize
 * @ptr:is a pointer
 * @old_size: size for modified
 * @new_size: result of size
 * Return: new size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}
	return (ptr);
}
