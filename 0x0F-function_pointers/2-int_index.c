/**
 * int_index - check the code for Holberton School students.
 * @array: is a list of elements
 * @size: number of elements
 * @cmp: pointer to compare the int
 * Return: -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	if (array != '\0' && cmp != '\0')
	{
		for (a = 0; a < size; a++)
		{
		cmp(array[a]);
		if (cmp(array[a]) != 0)
			return (a);
		}

	}
	return (-1);
}
