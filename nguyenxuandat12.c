#include <stdio.h>

int main()
{
    int i = 1;
    int space = 9;
    while (i <= 10)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        i++;
        space--;
    }
}