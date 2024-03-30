#include <stdio.h>
#include <stdlib.h>

#define SIZE 200

int main()
{
    puts("Adj meg adatot: ");
    char text[SIZE];
    fgets(text, SIZE, stdin);
    printf("%s\n", text);

    return 0;
}