#include <stdio.h>

int main()
{
    int szam;
    printf("Adjon meg egy szamot: ");
    scanf("%d", &szam);  
    if(szam == 0)
    {
        printf("nulla\n");
    } 
    else if(szam <= 0)
    {
        printf("negativ\n");
    }
    else{
        printf("pozitiv\n");
    }

    return 0;
}