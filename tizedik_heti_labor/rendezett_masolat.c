#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void tomb_kiir(int tomb[], int meret)
{
    for (int i = 0; i < meret; ++i)
    {
        printf("%d ", tomb[i]);
    }
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int *sorted(int tomb[], int meret)
{
    int* masolat = (int*)malloc(sizeof(int) * meret);
    for (int i = 0; i < meret; i++)
    {
        masolat[i] = tomb[i];
    }

    for (int i = 0; i < meret - 1; ++i)
    {
        for (int j = i + 1; j < meret; ++j)
        {
            if (masolat[j] < masolat[i])
            {
                swap(&masolat[i], &masolat[j]);
            }
        }
    }

    return masolat;
}

int main()
{
    int szamok[] = {1, 3, 2, 4, 5};
    tomb_kiir(szamok, SIZE);

    puts("");
    
    int *rendezett = sorted(szamok, SIZE);
    tomb_kiir(rendezett, SIZE);
    puts("");
    
    free(rendezett);

    return 0;
}