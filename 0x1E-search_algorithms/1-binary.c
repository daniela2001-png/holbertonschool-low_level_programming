#include "search_algos.h"

/**
 * binary_search - search an divide n times utnil found the value
 * @array: the array with n elements to verificate
 * @size: the size of the array to over
 * @value: the element to search
 * Return: a integer that is the index of the value found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, hi = size - 1, mid, i;
	int vmid;

	if (!array)
		return (-1);

	while (low <= hi)
	{
		printf("Searching in array: ");
		for (i = low; i < hi; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[hi]);

		mid = (hi + low) / 2;
		vmid = array[mid];

		if (vmid == value)
			return (mid);
		if (value > vmid)
			low = 1 + mid;
		if (value < vmid)
			hi = mid - 1;
	}


	return (-1);
}
