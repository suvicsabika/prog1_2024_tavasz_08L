#include <stdio.h>

int main()
{
    int szam;
    printf("Adjon meg egy pozitiv egeszet: ");
    
    scanf("%d", &szam);//Egész érték beolvasása a "szam" valtozóba, &-memóriacím.
    
    printf("szam erteke: %d\n", szam);
    return 0;
}