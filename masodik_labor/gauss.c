#include <stdio.h>

int main()
{
    
    int eredmeny = 0;
    int szam = 0;
    for(int i = 1; i<=50; i++)
    {
        szam = (i + 1) + (100 - i);
        eredmeny += szam;
    }
    printf("%d\n", eredmeny);
    return 0;
    
    /*
    int eredmeny = 0;
    int szam = 0;
    for(int i = 1; i<=100; i++)
    {
        szam += i;
    }
    printf("%d\n", szam);
    return 0;
    */
}