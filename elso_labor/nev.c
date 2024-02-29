#include <stdio.h>

int main()
{
    int i;
    
    while (i < 5)
    {
        printf("Csabi\n");
        i++;
    }
    
    for (i = 0; i < 5; ++i)
    {
        printf("%d) Csabi\n", i + 1);
    }
    
    return 0;
}