#include <stdio.h>
/**
 * array_iterator - prints an integer, in hexadecimal
 * @array: the integer to print
 * @size: size of my array
 * @action: is a pointer to my function used
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t a;
if (array != '\0' && action != '\0')
{
for (a = 0; a < size; a++)
action(array[a]);
}
}
