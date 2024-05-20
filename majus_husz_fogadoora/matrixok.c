#include "matrixutils.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(1980);
    int matrix[5][5];
    int meret = 5;

    matrix_feltolt(meret, matrix);

    matrix_kiir(meret, matrix);

    MatrixAdatok adatok = min_max_keres(meret, matrix);
    printf("Legkisebb elem: %d\n", adatok.min);
    printf("Legnagyobb elem: %d\n", adatok.max);

    return 0;
}