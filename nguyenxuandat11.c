#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 10)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        i++;
    }
}