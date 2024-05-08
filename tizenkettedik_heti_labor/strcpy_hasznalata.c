#include <stdio.h>
#include <string.h>

int main()
{
    const char* example = "Hello World!";
    printf("s1: %s\n", example);

    char s2[100];
    strcpy(s2, example);
    printf("%s\n", s2);

    return 0;
}