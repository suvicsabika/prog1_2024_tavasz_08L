#include <stdio.h>

int dupla(int numb)
{
    return 2* numb;
}
int main()
{
    int numb2 = 11;

    printf("%d ", numb2);
    printf("%d ", dupla(numb2));
}