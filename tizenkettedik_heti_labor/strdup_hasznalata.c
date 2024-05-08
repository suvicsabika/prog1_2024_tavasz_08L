#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const char* example = "Hello World!";
    printf("s1: %s\n", example);

    char* duplicate = strdup(example);
    printf("duplicate: %s\n", duplicate);

    free(duplicate);

    return 0;
}