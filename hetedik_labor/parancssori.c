#include "prog1.h"
#include <stdio.h>

int main(int argc, string argv[])
{
    argc--;
    printf("Felhasznalo altal megadott parancssori argumentumok szama: %d\n", argc);
    printf("Futattott fajl neve: %s\n", argv[0]);
    
    puts("A felhasznalo altal megadott paranccsori argumentumok:");
    for (int i = 1; i <= argc; ++i)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}