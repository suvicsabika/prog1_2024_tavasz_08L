#include <stdio.h>

const int SIZE = 26;

void tomb_feltolt(char tomb[], int meret)
{
    for (int i = 0; i < meret; ++i)
    {
        tomb[i] = (char)((int)'a' + i);
    }
}

int main()
{
    //FELADAT: Töltsünk fel egy tömböt az "kis" angol ABC összes betűjével!
    char abc[SIZE];
    tomb_feltolt(abc, SIZE);
    printf("%c\n", abc[0]);
}