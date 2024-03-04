#include <stdio.h>

int main()
{
    printf("FOR\n");
    for(int i = 1; i<=10; i++)
    {
        printf(" %d ",i);
    }

    printf(" \n");

     
    for(int i = 10; i>=1; i--)
    {
        printf(" %d ",i);
    }

    printf(" \n");
    printf("WHILE:\n");

    int x = 1;
    while(x <= 10)
    {
        printf(" %d ",x);
        x++;
    }

    printf(" \n");

    int y = 10;
    while(y >= 1)
    {
        printf(" %d ",y);
        y--;
    }
    return 0;
}