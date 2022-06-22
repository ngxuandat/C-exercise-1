#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 50; i++){
        if (i % 3 ==0)
        {
            if (i % 5 == 0)
            {
                printf("%d", i);
            }
        }
    }
}