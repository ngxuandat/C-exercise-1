#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 100)
    {
       int j = 2;
       int boolean = 0;
       while (j < i)
       {
           if (i % j == 0)
           {
               boolean ++;
           } 
           j++;
       } 
       if (boolean == 0)
       {
           printf("%d ", i);
       }
       i ++;
    }
}