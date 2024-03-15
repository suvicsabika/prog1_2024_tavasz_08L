#include <stdio.h>

int get_int()
{
    int numb;
    scanf("%d", &numb);

    return numb;
}

int mysqrt(int numb)
{
    numb = get_int();
    numb *= numb;

    return numb;
}

int main()
{
    printf("Give an integer: ");
    int numb = mysqrt(numb);

    printf("The int's sqrt is: %d", numb);
}
