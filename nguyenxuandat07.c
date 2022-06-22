#include <stdio.h>

int main()
{
    int i = 1;
    int j = 2;
    while (j<=100)
    {
        i = i + j;
        j++;
    }
    printf("%d", i);
}