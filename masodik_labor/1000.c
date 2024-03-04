#include <stdio.h>

int main()
{
    /*
    int eredmeny = 0;
    for(int i = 0; i < 1000; i++)
    {
        if(i % 3 == 0 | i % 5 == 0)
        {
            eredmeny += i;
        }
    }
    printf("%d\n",eredmeny);
    return 0;
    */
   const int N = 1000;
   int x = 0;
   for(int i = 0; i < N; i++)
   {
        if(i % 3 == 0 | i % 5 == 0)
        {
            x += i;
        }
   }
    printf("%d\n",x);
    return 0;
}