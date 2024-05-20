#ifndef MYMATRIXUTILS_H
#define MYMATRIXUTILS_H

typedef struct {
    int min;
    int max;
} MatrixAdatok;

int randint(int also, int felso);
void matrix_feltolt(const int n, int matrix[n][n]);
MatrixAdatok min_max_keres(const int n, const int matrix[n][n]);
void matrix_kiir(const int n, int matrix[n][n]);

#endif