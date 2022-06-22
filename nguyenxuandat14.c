#include <stdio.h>
int main()
{

	int i = 1;
    printf("\n");
	while (i < 10)
    {

		for (int j = 1; j < 10; j++)
		{
			int sum = i * j;
            if (sum < 10)
            {
				printf("%d  ",sum);
			}
            else{
                printf("%d ",sum);
            }
		}
        printf("\n");
		i++;
	}
    printf("\n");
}