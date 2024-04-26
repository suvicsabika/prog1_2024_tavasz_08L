#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int line_counter(char* fname)
{
    FILE *fp = fopen(fname, "r");

    if (fp == NULL)
    {
        fprintf(stderr, "Hiba! Nem lehetett megnyitni a(z) %s fajlt.", fname);
        exit(1);
    }
    
    int counter = 0;
    char line[SIZE];
    
    while (fgets(line, SIZE, fp) != NULL)
    {
        counter++;
    }

    fclose(fp);

    return counter;
}

int main()
{
    char* fname = "sorok.txt";

    int result = line_counter(fname);
    printf("Sorok szama: %d\n", result);

    return 0;
}