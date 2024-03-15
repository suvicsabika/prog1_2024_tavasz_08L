#include <stdio.h>

int get_int()
{
    int numb;
    scanf("%d", &numb);

    return numb;
}
int main()
{
    printf("Give an integer: ");

    int numb2 = get_int();

    printf("The numbber is: %d\n", numb2);
}