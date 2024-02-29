#include <stdio.h>

int main()
{
    int szam;
    printf("adjon meg egy egesz szamot: ");
    
    scanf("%d", &szam);
    
    printf("A megadott szam: %d\n", szam);
    if(szam % 2 == 0)
    {
        printf("A szam paros\n");
    }
    else
    {
        printf("A szam paratlan\n");
    }
    
    return 0;
}