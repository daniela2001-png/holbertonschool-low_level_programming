#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - check the code for Holberton School students.
 * @str: string origin
 * Return: pointer s is copy of original
 */

	char *_strdup(char *str)
	{

	char *s;
	int i, j;


	if (str == NULL)
	{
	return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;

	s = malloc(i * sizeof(char));



	if (s == NULL)
	{
	return (NULL);
	}


	for (j = 0; j < i; j++)
	{
	*(s + j) = *(str + j);
	}


	return (s);

	}
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

newname = _strdup(name);
newowner = _strdup(owner);
if (newname == NULL || newowner == NULL)
{
free(newname);
free(newowner);
return (NULL);
}
himydog = malloc(sizeof(dog_t));
if (himydog == NULL)
{
free(newname);
free(newowner);
return (NULL);
}
himydog->name = newname;
himydog->age = age;
himydog->owner = newowner;

return (himydog);
}
