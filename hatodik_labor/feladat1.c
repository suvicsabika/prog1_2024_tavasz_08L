#include <stdio.h>

const int SIZE = 26;

void ascii_lower(char tomb[])
{
    for (int i = 0; i < SIZE; ++i)
    {
        tomb[i] = (char)((int)'a' + i);
    }
}

void ascii_lower2(char tomb[])
{
    int index = 0;
    for (int i = (int)'a'; i <= (int)'z'; ++i)
    {
        tomb[index] = (char)i;
        index++;
    }
}

void tomb_kiir(char tomb[])
{
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%c", tomb[i]);
    }
    puts("");
}

int main()
{
    //FELADAT: Írjunk egy programot, ami egy karaktertömböt feltölt
    //         az kis angol abécé betűivel!
    char abece[SIZE];
    ascii_lower2(abece);
    tomb_kiir(abece);

    return 0;
}