#include <stdio.h>
#include <stdlib.h>
/*
int myabs(int numb)
{
    if(numb > 0)
    {
        return numb;
    }
    else{
        return numb * -1;
    }
}

int main()
{
    int numb;
    printf("Give a number: ");
    scanf("%d",&numb);

    printf("%d ", myabs(numb));
}
*/
/*
int getint()
{
    int numb;
    scanf("%d", &numb);

    return numb;
}

int main()
{
    printf("Give an integer: ");
    int number = getint();

    printf("The given integer: %d\n", number);
}
*/
/*
int getint_pos()
{
    int numb;
    do{
        printf("Give an integer: ");
        scanf("%d", &numb);
    }while(numb < 0);
}

int main()
{
    int numb = getint_pos();

    printf("The int is: %d", numb);
}
*/
int getint_pos()
{
    int numb;
    while(1)
    {
        printf("Give an integer: ");
        scanf("%d", &numb);
        if(numb > 0)
        {
            return numb;
        }
    }
}

int main()
{
    int numb = getint_pos();

    printf("The int is: %d", numb);
}