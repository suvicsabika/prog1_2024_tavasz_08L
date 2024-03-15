#include <stdio.h>

int main()
{
    int numb;
    while(1)
    {
        printf("Positive integer: ");
        scanf("%d", &numb);

        if(numb > 0)
        {
            break;
        }
    }

    printf("\n");
    printf("The integer is: %d\n", numb);
}