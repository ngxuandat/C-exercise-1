#include <stdio.h>

int main()
{
    int i = 1;
    int j = 2;
    while (j<=100)
    {   
        if (j % 2 == 0)
        {
            i = i + j;
        }
        else
        {
            i = i - j;
        }
        ++j;
    }
    printf("%d", i);
}