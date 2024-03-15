#include <stdio.h>

void tomb_kiir(const int n, const int tomb[])//Tömbök jelölése a formális paraméter listán
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");

    //tomb[0] = 99; - const miatt a tomb read-only, nem lehet módosítani
}

int tomb_osszead(const int n, const int tomb[])
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += tomb[i];
    }

    return sum;
}

int main()
{
    //A tömb az statikus, ha létrehozzuk az elem száma nem változhat
    int szamok[] = { 38, 73, 5, 4, 86, 4, 2, 4, 64, 65 };
    int meret = 10;

    int result = tomb_osszead(meret, szamok);
    printf("A tomb elemeinek az osszege: %d", result);

    return 0;
}