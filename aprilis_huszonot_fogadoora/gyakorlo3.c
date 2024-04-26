// Karakter törlése:

#include "prog1.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void karakter_torlo(string szo, string karakter)
{
    int hossz = strlen(szo);
    int j = 0;

    for (int i = 0; i < hossz; i++)
    {
        if (szo[i] != karakter[0])
        {
            szo[j] = szo[i];
            j++;
        }
    }

    szo[j] = '\0';
}

int main()
{
    string szo = get_string("Kerem adjon meg egy sztringet: ");
    if (!strcmp(szo, ""))
    {
        printf("Hiba! Meg kell adni egy sztringet...");
        exit(1);
    }

    string torlendo;

    while (strlen(szo) != 0)
    {
        torlendo = get_string("Adjon meg egy karaktert torlesre (vegjel: 0): ");

        if (strlen(torlendo) == 0)
        {
            printf("Hiba! Adjon meg egy karaktert...");
            exit(2);
        }

        if (!strcmp(torlendo, "0"))
        {
            exit(3);
        }

        karakter_torlo(szo, torlendo);

        if (strlen(szo) != 0)
        {
            printf("Eredmeny: %s\n", szo);
        }
    }

    printf("Nincs tobb karakter...\n");

    return 0;
}