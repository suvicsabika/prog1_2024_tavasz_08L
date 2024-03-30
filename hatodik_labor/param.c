#include "prog1.h"
#include <stdio.h>

int main(int argc, string argv[])
{
    //FELADAT: Írjunk programot, amely paranccssori argumentunként kap
    //         egyetlen egy nevet, és üdvözli a felhasználót!
    //         Hello %s!

    printf("Hello %s!", argv[1]);
    return 0;
}