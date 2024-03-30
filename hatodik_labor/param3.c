#include "prog1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        puts("Hiba! Egy parametert kell megadni.");
        exit(1);
    }

    string nev = argv[1];
    string batman = "Batman";
    string robin = "Robin";

    //if (!strcmp(nev, batman))
    if (strcmp(nev, batman) == 0 || strcmp(nev, robin) == 0)
    {
        printf("DENEVÉRVESZÉLY!\n");
    }
    else
    {
        printf("Hello %s\n", nev);
    }

    return 0;
}