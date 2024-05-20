#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int min;
    int max;
} MatrixAdatok;

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

    //MAX. és MIN. programozási tételek
    //TODO...

    adatok.max = max;
    adatok.min = min;

    return adatok;
}

int main()
{
    srand(1980);
    int matrix[5][5];

    matrix_feltolt(matrix, 5);

    return 0;
}