#include <stdio.h>

int main()
{
    int number;
    int counter;

    do
    {
        printf("Give a number (end: 0): ");
        scanf("%d", &number);

        if(number != 0)
        {
            counter++;
        }
    } while ( number != 0);

    printf("\n");
    printf("The amount of the numbers u given is: %d", counter);
    
}