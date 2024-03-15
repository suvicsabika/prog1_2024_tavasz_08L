#include <stdio.h>

int main()
{
    for(int numb = 1; numb <= 100; numb++)
    {
        if(numb % 3 == 0)
        {
            continue;
        }

        printf("%d", numb);
        if(numb != 100)
        {
            printf(", ");
        }
    }
}