// Gyors randomos ismétlés

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

int randint(int also, int felso)
{
    int veletlen = rand();
    int intervallum = felso - also + 1;

    veletlen = veletlen % intervallum;
    veletlen = also + veletlen;

    return veletlen;
}

void feltolt(int meret, int tomb[])
{
    // [100, 1000)
    for (int i = 0; i < meret; ++i)
    {
        tomb[i] = randint(100, 999);
    }
}

int tomb_minimum(int meret, int tomb[])
{
    int min = tomb[0];
    for (int i = 1; i < meret; ++i)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
    }

    return min;
}


int tomb_maximum(int meret, int tomb[])
{
    int max = tomb[0];
    for (int i = 1; i < meret; ++i)
    {
        if (tomb[i] > max)
        {
            max = tomb[i];
        }
    }

    return max;
}

int main()
{
    srand(2024);
    //srand(time(NULL)); //time.h

    int szamok[SIZE];
    feltolt(SIZE, szamok);

    int min = tomb_minimum(SIZE, szamok);
    int max = tomb_maximum(SIZE, szamok);
    
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    return 0;
}