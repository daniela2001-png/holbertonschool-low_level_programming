#include <stdio.h>

void main()
{
	int i,j,temp;
	int size = 10;
	
	if(size > 0)
	{
		for(i = 1 ;i <= size; i++)
		{
			for(j = 0 ;j < size; j++)
			{
				temp = size - j;
			     	if(temp < i)
				   printf("#");
				else
				   printf(" ");
			}
			printf("\n");
		}		
	}else
	{
		printf("\n");
	}
}
