#include <stdio.h>

int main()
{
    int numb;
    printf("Magassag: ");
    scanf("%d", &numb);
    for(int i = 1; i <= numb; i++)
    {
        int spaces = numb - i;
        int hash = i;

        for(int j = 0; j < spaces; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < hash; k++)
        {
            printf("#");
        }
        puts("");
    }
}