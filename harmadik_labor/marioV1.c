#include <stdio.h>

int main()
{
    int numb;
    printf("Magassag: ");
    scanf("%d", &numb);
    for(int i = 1; i <= numb; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("#");
        }
        puts("");
    }
}