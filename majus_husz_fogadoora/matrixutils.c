#include "matrixutils.h"
#include <stdio.h>
#include <stdlib.h>

int randint(int also, int felso)
{
    int veletlen = rand();
    int intervallum = felso - also + 1;

    veletlen = veletlen % intervallum;
    veletlen = also + veletlen;

    return veletlen;
}

void matrix_feltolt(const int n, int matrix[n][n])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            matrix[i][j] = randint(10, 99);
        }
    }
}


MatrixAdatok min_max_keres(const int n, const int matrix[n][n])
{
    int max = matrix[0][0];
    int min = matrix[0][0];

    MatrixAdatok adatok;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
    }

    adatok.max = max;
    adatok.min = min;

    return adatok;
}

void matrix_kiir(const int n, int matrix[n][n])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        puts("");
    }
}