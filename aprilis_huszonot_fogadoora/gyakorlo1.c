// Interaktív bekérés
// Hamming-távolság
// "toned"
// "roses"
// Hamming-távolság: 3, azonos indexeken lévő eltére karakterek számossága
// Hosszban megegyeznek, ha nem egyeznek meg akkor meg -1
// Pl.:
// int tavolsag = hamming_distance(elso, masodik);

#include "prog1.h"
#include <stdio.h>
#include <string.h>

int hamming_distance(string s1, string s2)
{
    int elso_hossz = strlen(s1);
    int masodik_hossz = strlen(s2);

    if (elso_hossz != masodik_hossz)
    {
        return -1;
    }

    int szamlalo = 0;
    for (int i = 0; i < elso_hossz; i++)
    {
        if (s1[i] != s2[i])
        {
            szamlalo++;
        }
    }

    return szamlalo;
}

int main()
{
    string elso = get_string("Elso szo: ");
    string masodik = get_string("Masodik szo: ");

    int tavolsag = hamming_distance(elso, masodik);
    printf("A(z) %s es a(z) %s Hamming-tavolsaga: %d\n", elso, masodik, tavolsag);

    return 0;
}