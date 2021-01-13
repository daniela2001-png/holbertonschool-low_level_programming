#include "search_algos.h"

/**
 * linear_search - search an elemetn insie of a array and return ur index
 * @array: the array with n elements to verificate
 * @size: the size of the array to over
 * @value: the element to search
 * Return: a integer that is the index of the value found inside of a array!
 */
int linear_search(int *array, size_t size, int value)
{

	size_t i = 0;

	if (!array || size == 0)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
