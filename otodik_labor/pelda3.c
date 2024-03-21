#include "prog1.h"
#include <stdio.h>
#include <string.h>

int find_char(string s, char c)
{
    int result = -1;
    int hossz = strlen(s);

    for (int i = 0; i < hossz; ++i)
    {
        if (s[i] == c)
        {
            result = i;
            return result;
        }
    }

    return result;
}

int contains_char(string s, char c)
{
    if (find_char(s, c) == -1)
    {
        return 0;
    }

    return 1;
}

int main()
{
    string nev = get_string("Add meg a neved: ");
    printf("%d\n", contains_char(nev, 'a'));

    return 0;
}