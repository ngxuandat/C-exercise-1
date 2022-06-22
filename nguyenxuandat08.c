#include <stdio.h>

int main()
{
    int i = 1;
    int j = 2;
    while (i <1000)
    {
        i = i + j;
        j++;
    }
    printf("%d", j);
}