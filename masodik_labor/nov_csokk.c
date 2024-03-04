#include <stdio.h>

int main()
{
    /*
    for(int i = 1; i<=10; i++)
    {
        printf(" %d ",i);
    }

    printf(" \n");
    */

    /* 
    for(int i = 10; i>=1; i--)
    {
        printf(" %d ",i);
    }
    */
    for(int i = 10; i>=1; i--)
    {
        if(i % 2 == 0)
        {
            printf(" %d ",i);
        }
    }

    return 0;
}