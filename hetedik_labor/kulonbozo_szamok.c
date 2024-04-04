#include <stdio.h>

#define SIZE 150

int main()
{
    int szam;
    int szamok[150] = {0};
    int szamlalo = 0;
    puts("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!");
    do
    {
        printf("Szam: ");
        scanf("%d", &szam);
        if (szam < 1 || szam > 99)
        {
            puts("Ez a szám kívül esik az elfogadható intervallumon!");
        }
        else
        {
            if (szam != szamok[szam]) {
                szamok[szam] = szam;
                szamlalo++;
            }
        }
    } while (szam != 0);
    
    printf("%d db különböző szám lett megadva.\n", szamlalo);

    for (int i = 0; i < SIZE; ++i)
    {
        if (szamok[i] != 0) {
            printf("%d, ", szamok[i]);
        }
    }
        
    puts("");

    return 0;
}