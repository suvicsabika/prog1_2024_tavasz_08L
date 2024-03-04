#include <stdio.h>

int main()
{
    int szam;
    do
    {
        printf("Give a positive number: ");
        scanf("%d", &szam);   
    }while(szam <= 0);

    printf("The given number (%d) is correct!\n", szam);

}