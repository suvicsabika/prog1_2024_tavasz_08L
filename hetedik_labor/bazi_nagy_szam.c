#include <stdio.h>
#include <string.h>

#define SIZE 250

int main()
{
    printf("Adj meg egy BAZI nagy szamot: ");
    
    char szam[SIZE];
    fgets(szam, SIZE, stdin);
    szam[strlen(szam) - 1] = '\0';

    int osszeg = 0;
    for (int i = 0; szam[i] != '\0'; ++i)
    {
        osszeg += szam[i] - '0';
    }

    printf("A szamjegyek osszege: %d\n", osszeg);

    return 0;
}