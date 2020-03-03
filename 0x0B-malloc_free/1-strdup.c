#include "holberton.h"
#include <stdlib.h>

	char *_strdup(char *str)
	{

	char *s;
	int i;


	if (str == NULL)
	{	
	return (NULL);
	}

	for (i=0; str[i] != '\0'; i++)

	s = malloc(i * sizeof(char));

	if (s == NULL)
	{	
	return (NULL);
	}

	int j;
	for (j = 0; j < i; j++)
	{
	*(s + i) = *(str + i);
	}


	return (s);

	}
