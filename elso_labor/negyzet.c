#include <stdio.h>

int main()
{
    int oldal;
    
    printf("kerem adja meg a negyzet oldalat (cm): ");
    scanf("%d", &oldal);
    
    int kerulet = 4 * oldal;
    int terulet = oldal * oldal;
    
    printf("negyzet terulete: %d(cm)\n", terulet);
    printf("negyzet kerulet: %d\(cm2)\n", kerulet);
    
    return 0;
}