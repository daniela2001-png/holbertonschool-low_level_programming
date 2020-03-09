#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - check the code for Holberton School students.
 * @name : name
 * @age : age
 * @owner : owner
 * Return: himydog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{

char *newname;
char *newowner;
dog_t *himydog;

newname = strdup(name);
newowner = strdup(owner);

himydog = malloc(sizeof(dog_t));
if (himydog == NULL)
return (NULL);

himydog->name = newname;
himydog->age = age;
himydog->owner = newowner;

return (himydog);
}
