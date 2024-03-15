#include <stdio.h>

int myabs(int numb1)
{
    if(numb1 >= 0)
    {
        return numb1;
    }
    else{
        return numb1 * -1;
    }
}
int main()
{
    int numb = -420; 

    printf("%d\n", numb);

    printf("%d ", myabs(numb));
}