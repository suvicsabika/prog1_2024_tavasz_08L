/*
 * Egy sor felépítése:
 * nev,jegy1,jegy2,jegy3,jegy4,jegy5

 * Határozzuk meg tanulónként az adott átlagot
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define BUFSIZE 50

typedef struct {
    char nev[32];
    double atlag;
} Hallgato;

int fajl_feldolgoz(Hallgato tomb[], const int meret, const char* fajlnev)
{
    FILE *fp = fopen(fajlnev, "r");

    char sor[BUFSIZE];
    char* nev;
    double atlag = 0;

    int index = 0;

    while(fgets(sor, BUFSIZE, fp) != NULL)
    {
        sor[strlen(sor) - 1] = '\0';

        Hallgato h;

        nev = strtok(sor, ",");
        strcpy(h.nev, nev);

        for (int i = 0; i < 5; ++i)
        {
            atlag += atoi(strtok(NULL, ","));
        }

        atlag /= 5.0;
        h.atlag = atlag;

        tomb[index++] = h;

        atlag = 0;
    }

    fclose(fp);

    //Valójánan hány db hallgatónk van
    return index;
}

void hallgatok_atlag(Hallgato tomb[], const int meret)
{
    puts("Atlagok: ");

    for (int i = 0; i < meret; ++i)
    {
        printf("%s: %.2f\n", tomb[i].nev, tomb[i].atlag);
    }
}

int main()
{
    const char* fajlnev = "jegyek.csv";
    Hallgato hallgatok[MAX];

    int hallgatok_szama = fajl_feldolgoz(hallgatok, MAX, fajlnev);

    hallgatok_atlag(hallgatok, hallgatok_szama);

    return 0;
}