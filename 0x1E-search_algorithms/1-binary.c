#include "search_algos.h"

/**
 * binary_search - search an elemetn insie of a arrayay and return ur indevalue
 * @array: the array with n elements to verificate
 * @size: the size of the array to over
 * @value: the element to search
 * Return: a integer
 */

int binary_search(int *array, size_t size, int value)
{
	/* where l == left or start of the array */
	int i, m, l = 0;
	/* where r == rigth or end of the array */
	int r = size - 1;
	/* return -1 when array is null*/
	if (!array)
		return (-1);
	/*
	 * the while condition is that the limit of the left side (0)
	 * be less that  the rigth side limit of the array = size -1
	 * when the limits overlap is cuz the element to search was not found
	 */
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r + 1; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		/*
		* m is the middle point of my array
		* and this value is not constant in other words changes!
		*/
		m = (r + l) / 2;
		if (array[m] == value)
			return (m);
		/*
		* here maybe we have :
		* array[m] = 1 and value = 4
		* so 1 is < that 4 move the limits and divide until foun or not the value
		*/
		if (array[m] < value)
			l = m + 1;
		else /* here is same logic like below */
			r = m - 1;
	}
	return (-1); /* if the element was not found returns -1*/
}
