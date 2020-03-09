#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int arraylen(char *str)
{
  int a = 0;
  int count = 0;

  if (str[0] != ' ')
    {
      count++;
    }
  for (; str[a]; a++)
    {
      if (str[a] == ' ' && str[a + 1] != ' ')
	{
	  count++;
	}
    }
  return (count - 1);
}
/**
 * strtow - check the code for Holberton School students.
 * @str:string origin
 * Return:a pointer my_str
 */

char **strtow(char *str)
{
	char **my_str;
	int count, idx = 0;
	int y, x, w, sub_idx;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	count = arraylen(str);
	my_str = malloc(sizeof(char *) * count);
	if (my_str == NULL)
	  {
	    free(my_str);
	    return (NULL);
	  }
	for (x = 0; str[x] != '\0'; x++)
	  {
		if (str[x] != ' ')
		{
		  for (y = x; str[y] != '\0' || str[y] != ' '; y++)
			{
				count++;
			}
	
			my_str[idx] = malloc(sizeof(char) * count + 1);
			if (my_str == NULL)
			{
				for (w = 0; w < idx; w++)
				{
					free(my_str[w]);
				}
				free(my_str);
				return (NULL);
			}
			

			for (sub_idx = 0; sub_idx < y; sub_idx++)
			{
				my_str[idx][sub_idx] = str[x];
				x++;
			}
			my_str[y] = '\0';
		}	idx++;
	
	}				
return (my_str);
}
