#include <stdio.h>

int main()
{
    int row = 10;
    int col = 10;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}