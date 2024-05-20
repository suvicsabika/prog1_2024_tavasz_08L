#include <stdio.h>
#include <stdlib.h>

int intcmp(const void *bal, const void *jobb)
{
    const int *a = (const int*)bal;
    const int *b = (const int*)jobb;

    return *a - *b;
}

void tomb_kiir(const int szamok[], const int meret)
{
    for (int i = 0; i < meret; ++i)
    {
        printf("%d ", szamok[i]);
    }
    puts("\n-------");
}

int main()
{
    int szamok[] = {1, 5, 3, 4, 2};
    int meret = 5;

    tomb_kiir(szamok, meret);

    qsort(szamok, meret, sizeof(int), intcmp);

    tomb_kiir(szamok, meret);

    return 0;
}