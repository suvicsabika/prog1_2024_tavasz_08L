#include "prog1.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        puts("Hiba! Ket parametert (szamot) kell megadni.");
        exit(1);
    }
    
    int a = atoi(argv[1]); //stdlib.h !!!
    int b = atoi(argv[2]); //stdlib.h !!!

    string c = "3.14";
    double d = atof(c); //stdlib.h !!!
    printf("%lf\n", d);

    printf("Eredmeny: %d\n", a + b);

    return 0;
}