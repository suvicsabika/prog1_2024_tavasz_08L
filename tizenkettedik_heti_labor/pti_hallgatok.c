#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100
#define BUFSIZE 100

typedef struct {
    char nev[32];
    int eletkor;
    char szak[5];
} Hallgato;

char * nagy_kezdobetusito(const char *nev)
{
    char *eredmeny = strdup(nev);
    int hossz = strlen(nev);

    eredmeny[0] = toupper(eredmeny[0]);
    for (int i = 1; i < hossz; ++i)
    {
        eredmeny[i] = tolower(eredmeny[i]);
    }

    return eredmeny;
}

void nagy_kezdobetusio_v2(char *nev)
{
    //Házi feladat implementálni az eljárást.
}

void printf_hallgato(const Hallgato *h)
{
    printf("Nev: %s, eletkor: %d, szak: %s\n", h->nev, h->eletkor, h->szak);
}

void kisbetusito(char* szak)
{
    for (int i = 0; szak[i] != '\0'; ++i)
    {
        szak[i] = tolower(szak[i]);
    }
}

// Házi feladat értelmezni az alábbi eljárást:
void hallgatokat_rendez(Hallgato tomb[], const int meret)
{
    Hallgato h;
    
    for (int i = 0; i < meret - 1; ++i) 
    {
        for (int j = i + 1; j < meret; ++j) 
        {
            if (strcmp(tomb[i].nev, tomb[j].nev) > 0) 
            {
                h = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = h;
            }
        }
    }
}

int feltolt(Hallgato tomb[], const int meret, const char* fajlnev)
{
    FILE *fp = fopen(fajlnev, "r");
    char sor[BUFSIZE];

    char *nev;
    int eletkor;
    char *szak;

    int index = 0;

    while (fgets(sor, BUFSIZE, fp) != NULL) 
    {
        sor[strlen(sor) - 1] = '\0';
        
        nev = strtok(sor, ",");
        eletkor = atoi(strtok(NULL, ","));
        szak = strtok(NULL, ",");

        kisbetusito(szak);
        if (strcmp(szak, "pti") == 0) {
            Hallgato h;

            strcpy(h.szak, szak);

            nev = nagy_kezdobetusito(nev);

            strcpy(h.nev, nev);

            free(nev);

            h.eletkor = eletkor;
         
            tomb[index++] = h;
        }
    }

    fclose(fp);

    return index;
}

int main()
{
    const char* fajlnev = "nevek.csv";
    Hallgato hallgatok[MAX];
    int hallgatok_szama = feltolt(hallgatok, MAX, fajlnev);

    // for (int i = 0; i < hallgatok_szama; ++i)
    // {
    //     printf_hallgato(&hallgatok[i]);
    // }

    hallgatokat_rendez(hallgatok, hallgatok_szama);

    // for (int i = 0; i < hallgatok_szama; ++i)
    // {
    //     printf_hallgato(&hallgatok[i]);
    // }

    for (int i = 0; i <hallgatok_szama; ++i)
    {
        printf("%s%s", hallgatok[i].nev, i == hallgatok_szama - 1 ? "\n" : ", ");
    }

    return 0;
}