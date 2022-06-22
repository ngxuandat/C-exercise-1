#include <stdio.h>

int main()
{
	int i = 1;
	while (i <= 5)
	{
		for (int j = 1; j <= 5; j++)
		{
			if (i < j)
			{   
				printf("(%d,%d)",i,j);
			}
		}
		i++;
	}
}