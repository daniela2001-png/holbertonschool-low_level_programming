#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - check the code for Holberton School students.
 * @d: pointer
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: ");
d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: ");
d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
}
}

