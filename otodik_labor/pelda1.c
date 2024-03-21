#include "prog1.h"
#include <stdio.h>
#include <string.h>

int my_strlen(string s)
{
    int szamlalo = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        szamlalo++;
    }

    return szamlalo;
}

int my_strlen_while(string s)
{
    int szamlalo = 0;
    while (s[szamlalo] != '\0')
    {
        szamlalo++;
    }

    return szamlalo;
}

int main()
{
    string nev = get_string("Add meg a neved: ");
    printf("Hello %s!\n", nev);
    int hossz = strlen(nev);
    printf("A neved %d karakterbol all!\n", hossz);

    return 0;
}