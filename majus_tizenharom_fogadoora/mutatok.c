#include <stdio.h>
#include <ctype.h>

void nagybetusito(char* name)
{
    for (int i = 0; name[i] != '\0'; ++i)
    {
        name[i] = toupper(name[i]);
    }
}

void increment_age(int *age)
{
    (*age)++;
}

int main(int argc, char* argv[])
{
    char name[] = "Csabi";
    printf("%s\n", name);

    nagybetusito(name);
    printf("%s\n", name);

    int actual_age = 21;
    int *age = &actual_age;

    increment_age(age);
    printf("%d\n", (*age));

    return 0;
}